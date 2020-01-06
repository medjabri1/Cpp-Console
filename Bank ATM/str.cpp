#include "str.h"

void menuGen(int &choix)
{
	system("color f1");
	cout<<endl<<endl<<"\t\t\t\t-------------------------------------------------";
	cout<<endl<<"\t\t\t\t-------------------------------------------------";
	cout<<endl<<endl<<"\t\t\t\t\t      Gestion des banques"<<endl;
	cout<<endl<<"\t\t\t----------------------------------------------------------------";
	cout<<endl<<"\t\t\t----------------------------------------------------------------"<<endl;
	cout<<endl<<endl<<endl<<"\t\t1 - Gestion des clients";
	cout<<"\t\t\t\t\t2 - Gestion des comptes";
	cout<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t\t   3 - Gestion des operations";
	cout<<endl<<endl<<endl<<"\t\t\t----------------------------------------------------------------";
	cout<<endl<<"\t\t\t----------------------------------------------------------------"<<endl;
	cout<<endl<<endl<<"\t\t\t\t\t\t\t";
	cin>>choix;
	system("cls");
}

void menuGclient(int &choix)
{
	system("color 70");
	cout<<endl<<endl<<"\t\t\t\t-----------------------------------------------";
	cout<<endl<<"\t\t\t\t-----------------------------------------------";
	cout<<endl<<endl<<"\t\t\t\t\t      Gestion des clients"<<endl;
	cout<<endl<<"\t\t\t----------------------------------------------------------------";
	cout<<endl<<"\t\t\t----------------------------------------------------------------"<<endl;
	cout<<endl<<endl<<endl<<"\t\t1 - Ajouter client";
	cout<<"\t\t\t\t\t2 - Modifier client";
	cout<<endl<<endl<<endl<<endl<<endl<<"\t\t3 - Supprimer client";
	cout<<"\t\t\t\t\t4 - Carte client";
	cout<<endl<<endl<<endl<<"\t\t\t----------------------------------------------------------------";
	cout<<endl<<"\t\t\t----------------------------------------------------------------"<<endl;
	cout<<endl<<endl<<"\t\t\t\t\t\t\t";
	cin>>choix;
	system("cls");
}
void menuGcompte(int &choix)
{
	system("color 70");
	cout<<endl<<endl<<"\t\t\t\t-----------------------------------------------";
	cout<<endl<<"\t\t\t\t-----------------------------------------------";
	cout<<endl<<endl<<"\t\t\t\t\t      Gestion des comptes"<<endl;
	cout<<endl<<"\t\t\t----------------------------------------------------------------";
	cout<<endl<<"\t\t\t----------------------------------------------------------------"<<endl;
	cout<<endl<<endl<<endl<<"\t\t1 - Ajouter compte";
	cout<<"\t\t\t\t\t2 - Consulter solde";
	cout<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t\t       3 - Fermer compte";
	cout<<endl<<endl<<endl<<"\t\t\t----------------------------------------------------------------";
	cout<<endl<<"\t\t\t----------------------------------------------------------------"<<endl;
	cout<<endl<<endl<<"\t\t\t\t\t\t\t";
	cin>>choix;
	system("cls");
}
void menuGoperation(int &choix)
{
	system("color 70");
	cout<<endl<<endl<<"\t\t\t\t-----------------------------------------------";
	cout<<endl<<"\t\t\t\t-----------------------------------------------";
	cout<<endl<<endl<<"\t\t\t\t\t     Gestion des operation"<<endl;
	cout<<endl<<"\t\t\t----------------------------------------------------------------";
	cout<<endl<<"\t\t\t----------------------------------------------------------------"<<endl;
	cout<<endl<<endl<<endl<<"\t\t1 - Ajouter montant";
	cout<<"\t\t\t\t\t2 - Retirer montant";
	cout<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t\t      3 - Verser montant";
	cout<<endl<<endl<<endl<<"\t\t\t----------------------------------------------------------------";
	cout<<endl<<"\t\t\t----------------------------------------------------------------"<<endl;
	cout<<endl<<endl<<"\t\t\t\t\t\t\t";
	cin>>choix;
	system("cls");
}
