#include "fct.h"
#include "str.h"
#include<string>
#include<string.h>
#include<ctime>
#include <cstdlib>

/* =================================================================================================================*/ //Client

void ajouterClient(client *a)
{
	string forGetLine;
	a->ID_client=1;
	ifstream fichier1 ("files/client.txt" , ios::in);
	if(fichier1)
	{
		while(getline(fichier1,forGetLine))
		{
			a->ID_client++;
		}
	}
	cout<<endl<<endl<<"\tID \t\t\t: "<<a->ID_client<<endl;
	cout<<endl<<"\tTaper le nom \t\t: ";
	cin>>a->nom;
	cout<<endl<<"\tTaper le prenom \t: ";
	cin>>a->prenom;
	cout<<endl<<"\tTaper la profession \t: ";
	cin>>a->profession;
	cout<<endl<<"\tTaper le num de Tel \t: ";
	cin>>a->numTel;
	cout<<endl<<endl;
	fichier1.close();
	fstream fichier2 ("files/client.txt" , ios::out | ios::app);
	cout<<endl<<endl<<"\tConfirmer ? (y/..) : ";
	char conf;
	cin>>conf;
	if(conf=='y')
	{
		if(fichier2)
		{
			fichier2<<a->ID_client<<" "<<a->nom<<" "<<a->prenom<<" "<<a->profession<<" "<<a->numTel<<endl;
		}
		cout<<"\n\n\tClient ajoute!"<<endl;
	}
	else
	{
		cout<<"\n\n\tOperation (Ajouter un client) est annulee!"<<endl;	
	}
}
void supprimerClient(int ID)
{
	cout<<endl<<endl<<"\tAnnuler ? (y/..) : ";
	char conf;
	cin>>conf;
	if(conf=='y')
	{
		cout<<"\n\n\tOperation (Supprimer un client) est annulee!"<<endl;
	}
	else
	{	
		string ch;
		fstream fichier ("files/client.txt",ios::in | ios::out);
		ofstream fichTmp ("files/clientTmp.txt", ios::out);
		int i=0;
		if(fichier && fichTmp)
		{
			while(getline(fichier,ch))
			{
				i++;
				if(i!=ID)
				{
					fichTmp<<ch<<endl;
				}
				else
				{
					fichTmp<<i<<" Client deleted!"<<endl;
				}
			}
			if(ID>i)
			{
				system("color 80");
				cout<<"\n\n\tCe client n'existe pas!"<<endl;
			}
			else
			{
				system("color F4");
				cout<<"\n\n\tClient supprime!"<<endl;
			}
		}
		fichier.close();
		fichTmp.close();
		remove("files/client.txt");
		rename("files/clientTmp.txt","files/client.txt");
	}
}
void modifierClient(int ID)
{
	cout<<endl<<endl<<"\tAnnuler ? (y/..) : ";
	char conf;
	cin>>conf;
	if(conf=='y')
	{
		cout<<"\n\n\tOperation (Modifier un client) est annulee!"<<endl;
	}
	else
	{	
		string ch;
		fstream fichier ("files/client.txt",ios::in | ios::out);
		ofstream fichTmp ("files/clientTmp.txt", ios::out | ios::trunc);
		int i=0;
		if(fichier && fichTmp)
		{
			while(getline(fichier,ch))
			{
				i++;
				if(i!=ID)
				{
					fichTmp<<ch<<endl;
				}
				else
				{
					system("cls");
					client c;
					c.ID_client=i;
					cout<<endl<<endl<<endl<<"\tID \t\t\t: "<<c.ID_client<<endl;
					cout<<endl<<"\tTaper le nom \t\t: ";
					cin>>c.nom;
					cout<<endl<<"\tTaper le prenom \t: ";
					cin>>c.prenom;
					cout<<endl<<"\tTaper la profession \t: ";
					cin>>c.profession;
					cout<<endl<<"\tTaper le num de Tel \t: ";
					cin>>c.numTel;
					cout<<endl<<endl;
					fichTmp<<c.ID_client<<" "<<c.nom<<" "<<c.prenom<<" "<<c.profession<<" "<<c.numTel<<endl;
				}
			}
			if(ID>i)
			{
				system("color 80");
				cout<<"\n\n\tCe client n'existe pas!"<<endl;
			}
			else
			{
				cout<<"\n\n\tClient modifie!"<<endl;
			}
		}
		fichier.close();
		fichTmp.close();
		remove("files/client.txt");
		rename("files/clientTmp.txt","files/client.txt");
	}
}
void infoClient(int ID)
{
	string ch;
	ifstream fichier ("files/client.txt" , ios::in | ios::out );
	int i=0;
	if(fichier)
	{
		if(ID==1)
		{
			client a;
			fichier>>a.ID_client;
			fichier>>a.nom;
			fichier>>a.prenom;
			fichier>>a.profession;
			fichier>>a.numTel;
			system("cls");
			cout<<endl<<endl<<"\t\t===========================================================================";
			cout<<endl<<"\t\t===========================================================================";
			cout<<endl<<endl<<"\t\t\t\t\t    Informations Client : ";
			cout<<endl<<endl<<"\t\t===========================================================================";
			cout<<endl<<endl<<"\t\t\t\t\t\tID Client : "<<a.ID_client;
			cout<<endl<<endl<<"\t\tNom : "<<a.nom;
			cout<<"\t\t\t\t\t\tPrenom : "<<a.prenom;
			cout<<endl<<endl<<"\t\tProfession : "<<a.profession;
			cout<<"\t\t\t\t\tNum Tel : "<<a.numTel;	
			cout<<endl<<endl<<"\t\t===========================================================================";
			cout<<endl<<"\t\t===========================================================================";
		}
		else
		{
			client a;
			while(getline(fichier,ch))
			{
				i++;
				if(i==ID-1)
				{
					client a;
					fichier>>a.ID_client;
					fichier>>a.nom;
					fichier>>a.prenom;
					fichier>>a.profession;
					fichier>>a.numTel;
				}
			}
			if(ID>i)
			{
				system("color 80");
				cout<<"\n\n\tCe client n'existe pas!"<<endl;
			}
			else
			{
				system("cls");
				cout<<endl<<endl<<"\t\t===========================================================================";
				cout<<endl<<"\t\t===========================================================================";
				cout<<endl<<endl<<"\t\t\t\t\t    Informations Client : ";
				cout<<endl<<endl<<"\t\t===========================================================================";
				cout<<endl<<endl<<"\t\t\t\t\t\tID Client : "<<a.ID_client;
				cout<<endl<<endl<<"\t\tNom : "<<a.nom;
				cout<<"\t\t\t\t\t\tPrenom : "<<a.prenom;
				cout<<endl<<endl<<"\t\tProfession : "<<a.profession;
				cout<<"\t\t\t\t\tNum Tel : "<<a.numTel;	
				cout<<endl<<endl<<"\t\t===========================================================================";
				cout<<endl<<"\t\t===========================================================================";
			}
		}
	}
}

/* =================================================================================================================*/ //Others

void getDate(char chDate[])
{
	char date[30];
	time_t now;
	struct tm nowLocal;
	now=time(NULL);
	nowLocal=*localtime(&now);
	sprintf(date,"%d-%d-%d %d:%d:%d",nowLocal.tm_mday,nowLocal.tm_mon+1,nowLocal.tm_year+1900,nowLocal.tm_hour,nowLocal.tm_min,nowLocal.tm_sec);
	strcpy(chDate,date);
}
float getSolde(int ID_cmp)
{
	string ch;
	ifstream fichier ("files/compte.txt" , ios::in | ios::out );
	int i=0;
	if(fichier)
	{
		if(ID_cmp==1)
		{
			compte c;
			fichier>>c.ID_compte;
			fichier>>c.ID_client;
			fichier>>c.solde;
			return(c.solde);
		}
		else
		{
			compte c;
			while(getline(fichier,ch))
			{
				i++;
				if(i==ID_cmp-1)
				{
					fichier>>c.ID_compte;
					fichier>>c.ID_client;
					fichier>>c.solde;
				}
			}
			if(ID_cmp>i)
			{
				return(-1);
			}
			else
			{
				return(c.solde);
			}
		}
	}
}
void infoCompte(int ID , compte *c)
{
	string ch;
	ifstream fichier ("files/compte.txt" , ios::in | ios::out );
	int i=0;
	if(fichier)
	{
		if(ID==1)
		{
			fichier>>c->ID_compte;
			fichier>>c->ID_client;
			fichier>>c->solde;
			fichier>>c->dateOuvert;
			fichier>>c->heureOuvert;
		}
		else
		{
			client a;
			while(getline(fichier,ch))
			{
				i++;
				if(i==ID-1)
				{
					fichier>>c->ID_compte;
					fichier>>c->ID_client;
					fichier>>c->solde;
					fichier>>c->dateOuvert;
					fichier>>c->heureOuvert;
				}
			}
			if(ID>i)
			{
				system("color 80");
				cout<<"\n\n\tCe compte n'existe pas!"<<endl;
			}
		}
	}
}
void modifierComptet(int ID , compte *a)
{
	cout<<endl<<endl<<"\tAnnuler ? (y/..) : ";
	char conf;
	cin>>conf;
	if(conf=='y')
	{
		cout<<"\n\n\tOperation sur solde est annulee!"<<endl;
	}
	else
	{	
		string ch;
		fstream fichier ("files/compte.txt",ios::in | ios::out);
		ofstream fichTmp ("files/compteTmp.txt", ios::out | ios::trunc);
		int i=0;
		if(fichier && fichTmp)
		{
			while(getline(fichier,ch))
			{
				i++;
				if(i!=ID)
				{
					fichTmp<<ch<<endl;
				}
				else
				{
					system("cls");
					
					cout<<endl<<endl;
					fichTmp<<a->ID_compte<<" "<<a->ID_client<<" "<<a->solde<<" "<<a->dateOuvert<<" "<<a->heureOuvert<<endl;
				}
			}
			cout<<"\n\n\tMontant ajoute!"<<endl;
		}
		fichier.close();
		fichTmp.close();
		remove("files/client.txt");
		rename("files/clientTmp.txt","files/client.txt");
	}
}

/* =================================================================================================================*/ //Compte

void creeCompte(compte *c)
{
	int ID_File=1;
	cout<<"\n\n\tTaper le ID du client : ";
	cin>>c->ID_client;
	string forGetLine;
	ifstream fichier1 ("files/client.txt" , ios::in);
	fstream fichCmp ("files/compte.txt" , ios::in | ios::out | ios::app);
	if(fichier1)
	{
		while(getline(fichier1,forGetLine))
		{
			ID_File++;
		}
	}
	if(c->ID_client>ID_File)
	{
		system("color 80");
		cout<<"\n\n\tCe client n'existe pas!"<<endl;
	}
	else
	{
		if(fichCmp)
		{
			char chSal;
			c->ID_compte=1;
			while(getline(fichCmp,forGetLine))
			{
				c->ID_compte++;
			}
			fichCmp.close();
			system("cls");
			cout<<endl<<endl<<"\tID Client : "<<c->ID_client<<endl;
			cout<<endl<<endl<<"\tID Compte : "<<c->ID_compte<<endl;
			cout<<endl<<endl<<"\tPoser un solde initial ? (y/n) : ";
			cin>>chSal;
			if(chSal=='y')
			{
				cout<<endl<<endl<<"\tTaper le solde en DH : ";
				cin>>c->solde;
			}
			else if(chSal=='n')
			{
				cout<<endl<<endl<<"\tVotre solde est : 0DH"<<endl;
				c->solde=0;
			}
			getDate(c->dateOuvert);
			cout<<endl<<endl<<"\tDate de creation : "<<c->dateOuvert;
			//																	Pour Anuler
			cout<<endl<<endl<<endl<<endl<<endl<<"\tAnnuler ? (y/..) : ";
			char conf;
			cin>>conf;
			if(conf=='y')
			{
				cout<<"\n\tOperation (Creer un compte) est annulee!"<<endl;
			}
			else
			{
				fstream fichCompte("files/compte.txt",ios::out | ios::app);
				if(fichCompte)
				{
					fichCompte<<c->ID_compte<<" "<<c->ID_client<<" "<<c->solde<<" "<<c->dateOuvert<<endl;
				}
				cout<<endl<<"\tCompte cree!"<<endl;
				fichCompte.close();
			}
		}
	}
	fichier1.close();
}
void consulterSolde(int ID_cmp)
{
	string ch;
	ifstream fichier ("files/compte.txt" , ios::in | ios::out );
	int i=0;
	if(fichier)
	{
		if(ID_cmp==1)
		{
			compte c;
			fichier>>c.ID_compte;
			fichier>>c.ID_client;
			fichier>>c.solde;
			system("cls");
			cout<<endl<<endl<<"\t\t===========================================================================";
			cout<<endl<<"\t\t===========================================================================";
			cout<<endl<<endl<<"\t\t\t\t\t   Consultation de solde : ";
			cout<<endl<<endl<<"\t\t===========================================================================";
			cout<<endl<<endl<<"\t\t\t\t\t\tID Compte : "<<c.ID_compte;
			cout<<endl<<endl<<"\t\tID Client: "<<c.ID_client;
			cout<<"\t\t\t\t\t\tSolde : "<<c.solde<<" DH";
			cout<<endl<<endl<<"\t\t===========================================================================";
			cout<<endl<<"\t\t===========================================================================";
		}
		else
		{
			compte c;
			while(getline(fichier,ch))
			{
				i++;
				if(i==ID_cmp-1)
				{
					fichier>>c.ID_compte;
					fichier>>c.ID_client;
					fichier>>c.solde;
				}
			}
			if(ID_cmp>i)
			{
				system("color 80");
				cout<<"\n\n\tCe compte n'existe pas!"<<endl;
			}
			else
			{
				system("cls");
				cout<<endl<<endl<<"\t\t===========================================================================";
				cout<<endl<<"\t\t===========================================================================";
				cout<<endl<<endl<<"\t\t\t\t\t   Consultation de solde : ";
				cout<<endl<<endl<<"\t\t===========================================================================";
				cout<<endl<<endl<<"\t\t\t\t\t\tID Compte : "<<c.ID_compte;
				cout<<endl<<endl<<"\t\tID Client: "<<c.ID_client;
				cout<<"\t\t\t\t\t\tSolde : "<<c.solde<<" DH";
				cout<<endl<<endl<<"\t\t===========================================================================";
				cout<<endl<<"\t\t===========================================================================";
			}
		}
	}
}
void fermerCompte(int ID)
{
	cout<<endl<<endl<<"\tAnnuler ? (y/..) : ";
	char conf;
	cin>>conf;
	if(conf=='y')
	{
		cout<<"\n\n\tOperation (Fermer un compte) est annulee!"<<endl;
	}
	else
	{	
		string ch;
		fstream fichier ("files/compte.txt",ios::in | ios::out);
		ofstream fichTmp ("files/compteTmp.txt", ios::out);
		int i=0;
		if(fichier && fichTmp)
		{
			while(getline(fichier,ch))
			{
				i++;
				if(i!=ID)
				{
					fichTmp<<ch<<endl;
				}
				else
				{
					fichTmp<<i<<" Account deleted!"<<endl;
				}
			}
			if(ID>i)
			{
				system("color 80");
				cout<<"\n\n\tCe compten'existe pas!"<<endl;
			}
			else
			{
				system("color F4");
				cout<<"\n\n\tCompte ferme!"<<endl;
			}
		}
		fichier.close();
		fichTmp.close();
		remove("files/compte.txt");
		rename("files/compteTmp.txt","files/compte.txt");
	}
}

/* =================================================================================================================*/ //Operation

void ajouterMontant(int ID , compte a)
{
	float montant;
	cout<<endl<<endl<<"\tTaper le montant a ajoutee en DH : ";
	cin>>montant;
	infoCompte(ID,&a);
	a.solde=a.solde+montant;
	cout<<endl<<endl<<"\tAnnuler ? (y/..) : ";
	char conf;
	cin>>conf;
	if(conf=='y')
	{
		cout<<"\n\n\tOperation sur solde est annulee!"<<endl;
	}
	else
	{	
		string ch;
		fstream fichier ("files/compte.txt",ios::in | ios::out);
		fstream fichTmp ("files/compteTmp.txt", ios::out | ios::trunc);
		int i=0;
		if(fichier && fichTmp)
		{
			while(getline(fichier,ch))
			{
				i++;
				if(i!=ID)
				{
					fichTmp<<ch<<endl;
				}
				else
				{
					cout<<endl<<endl;
					fichTmp<<a.ID_compte<<" "<<a.ID_client<<" "<<a.solde<<" "<<a.dateOuvert<<" "<<a.heureOuvert<<endl;
				}
			}
			cout<<"\n\n\tMontant ajoute!"<<endl;
		}
		fichier.close();
		fichTmp.close();
		remove("files/compte.txt");
		rename("files/compteTmp.txt","files/compte.txt");
		system("cls");
		cout<<endl<<endl<<"\t\t===========================================================================";
		cout<<endl<<"\t\t===========================================================================";
		cout<<endl<<endl<<"\t\t\t\t\t     Ticket d'ajoute : ";
		cout<<endl<<endl<<"\t\t===========================================================================";
		cout<<endl<<endl<<"\t\t\t\t\t     montant : "<<montant<<" DH";
		cout<<endl<<endl<<"\t\tID Compte: "<<a.ID_compte;
		cout<<"\t\t\t\t\t\t    ID Client : "<<a.ID_client;
		cout<<endl<<endl<<"\t\t===========================================================================";
		cout<<endl<<"\t\t===========================================================================";
	}
}
void retirerMontant(int ID , compte b)
{
	float montant;
	cout<<endl<<endl<<"\tTaper le montant a retirer en DH : ";
	cin>>montant;
	if(getSolde(ID)>=montant)
	{
		infoCompte(ID,&b);
		b.solde=b.solde-montant;
		cout<<endl<<endl<<"\tAnnuler ? (y/..) : ";
		char conf;
		cin>>conf;
		if(conf=='y')
		{
			cout<<"\n\n\tOperation sur solde est annulee!"<<endl;
		}
		else
		{	
			string ch;
			fstream fichier ("files/compte.txt",ios::in | ios::out);
			fstream fichTmp ("files/compteTmp.txt", ios::out | ios::trunc);
			int i=0;
			if(fichier && fichTmp)
			{
				while(getline(fichier,ch))
				{
					i++;
					if(i!=ID)
					{
						fichTmp<<ch<<endl;
					}
					else
					{
						cout<<endl<<endl;
						fichTmp<<b.ID_compte<<" "<<b.ID_client<<" "<<b.solde<<" "<<b.dateOuvert<<" "<<b.heureOuvert<<endl;
					}
				}
				cout<<"\n\n\tMontant retiree!"<<endl;
			}
			fichier.close();
			fichTmp.close();
			remove("files/compte.txt");
			rename("files/compteTmp.txt","files/compte.txt");
			system("cls");
			cout<<endl<<endl<<"\t\t===========================================================================";
			cout<<endl<<"\t\t===========================================================================";
			cout<<endl<<endl<<"\t\t\t\t\t   Ticket de retirement : ";
			cout<<endl<<endl<<"\t\t===========================================================================";
			cout<<endl<<endl<<"\t\t\t\t\t     montant : "<<montant<<" DH";
			cout<<endl<<endl<<"\t\tID Compte: "<<b.ID_compte;
			cout<<"\t\t\t\t\t\t    ID Client : "<<b.ID_client;
			cout<<endl<<endl<<"\t\t===========================================================================";
			cout<<endl<<"\t\t===========================================================================";
		}
	}
	else
	{
		system("color 80");
		cout<<endl<<endl<<endl<<endl<<"\tVotre solde est insuffisant pour cette operation!"<<endl<<endl<<endl;
	}
}
void verserMontant(int ID , compte a , int idDest , compte b)
{
	float montant;
	cout<<endl<<endl<<"\tTaper le montant a verser en DH : ";
	cin>>montant;
	if(getSolde(ID)>=montant)
	{
		infoCompte(ID,&a);
		a.solde=a.solde-montant;
		cout<<endl<<endl<<"\tAnnuler ? (y/..) : ";
		char conf;
		cin>>conf;
		if(conf=='y')
		{
			cout<<"\n\n\tOperation (versement du solde) est annulee!"<<endl;
		}
		else
		{	
			string ch;
			fstream fichier ("files/compte.txt",ios::in | ios::out);
			fstream fichTmp ("files/compteTmp.txt", ios::out );
			int i=0;
			if(fichier && fichTmp)
			{
				while(getline(fichier,ch))
				{
					i++;
					if(i!=ID)
					{
						fichTmp<<ch<<endl;
					}
					else
					{
						cout<<endl<<endl;
						fichTmp<<a.ID_compte<<" "<<a.ID_client<<" "<<a.solde<<" "<<a.dateOuvert<<" "<<a.heureOuvert<<endl;
					}
				}
			}
			fichier.close();
			fichTmp.close();
			remove("files/compte.txt");
			rename("files/compteTmp.txt","files/compte.txt");
			
			infoCompte(idDest,&b);
			b.solde=b.solde+montant;
			string ch1;
			fstream fichier1 ("files/compte.txt",ios::in | ios::out);
			fstream fichTmp1 ("files/compteTmp.txt", ios::out );
			i=0;
			if(fichier1 && fichTmp1)
			{
				while(getline(fichier1,ch1))
				{
					i++;
					if(i!=idDest)
					{
						fichTmp1<<ch1<<endl;
					}
					else
					{
						cout<<endl<<endl;
						fichTmp1<<b.ID_compte<<" "<<b.ID_client<<" "<<b.solde<<" "<<b.dateOuvert<<" "<<b.heureOuvert<<endl;
					}
				}
			}
			fichier1.close();
			fichTmp1.close();
			remove("files/compte.txt");
			rename("files/compteTmp.txt","files/compte.txt");
			system("cls");
			cout<<endl<<endl<<"\t\t=============================================================================";
			cout<<endl<<"\t\t=============================================================================";
			cout<<endl<<endl<<"\t\t\t\t\t   Ticket de versement : ";
			cout<<endl<<endl<<"\t\t=============================================================================";
			cout<<endl<<endl<<"\t\t\t\t\t     montant : "<<montant<<" DH";
			cout<<endl<<endl<<"\t\tID Compte: "<<a.ID_compte;
			cout<<"\t\t\t\t\t\tcompte estination : "<<b.ID_compte;
			cout<<endl<<endl<<"\t\t=============================================================================";
			cout<<endl<<"\t\t=============================================================================";
		}
	}
	else
	{
		system("color 80");
		cout<<endl<<endl<<endl<<endl<<"\tVotre solde est insuffisant pour cette operation!"<<endl<<endl<<endl;
	}
}

