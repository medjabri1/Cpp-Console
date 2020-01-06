#include <iostream>
#include<conio.h>

#include "str.h"
#include "fct.h"

using namespace std;

int main()
{
	debut :
		int choixGen,choixGclient,choixGcompte,choixGoperation,choixQuit;
		menuGen(choixGen);
		switch(choixGen)
		{
			case 1:
				menuGclient(choixGclient);
				switch(choixGclient)
				{
					case 1:
						client c;
						ajouterClient(&c);
						getch();
						cout<<"\n\n\t\t\t1 - Menu Principale\t\t\t\t.. - Quitter"<<endl;
						cout<<endl<<"  \t\t\t\t\t\t\t";
						cin>>choixQuit;
						if(choixQuit==1)
						{
							system("cls");
							goto debut;
						}
						break;
					case 2:
						int i;
						cout<<"\n\n\tTaper l ID du client a modifier : ";
						cin>>i;
						modifierClient(i);
						getch();
						cout<<"\n\n\t\t\t1 - Menu Principale\t\t\t\t.. - Quitter"<<endl;
						cout<<endl<<"  \t\t\t\t\t\t\t";
						cin>>choixQuit;
						if(choixQuit==1)
						{
							system("cls");
							goto debut;
						}
						break;
					case 3:
						int a;
						cout<<"\n\n\tTaper l ID du client a supprimer : ";
						cin>>a;
						supprimerClient(a);
						getch();
						cout<<"\n\n\t\t\t1 - Menu Principale\t\t\t\t.. - Quitter"<<endl;
						cout<<endl<<"  \t\t\t\t\t\t\t";
						cin>>choixQuit;
						if(choixQuit==1)
						{
							system("cls");
							goto debut;
						}
						break;
					case 4:
						int e;
						cout<<"\n\n\tTaper l ID du client pour avoir la carte: ";
						cin>>e;
						infoClient(e);
						getch();
						cout<<endl<<endl<<"\n\n\n\n\t\t\t1 - Menu Principale\t\t\t\t.. - Quitter"<<endl;
						cout<<endl<<"  \t\t\t\t\t\t\t";
						cin>>choixQuit;
						if(choixQuit==1)
						{
							system("cls");
							goto debut;
						}
				}
				break;
			case 2:
				menuGcompte(choixGcompte);
				switch(choixGcompte)
				{
					case 1:
						compte c;
						creeCompte(&c);
						getch();
						cout<<"\n\n\t\t\t1 - Menu Principale\t\t\t\t.. - Quitter"<<endl;
						cout<<endl<<"  \t\t\t\t\t\t\t";
						cin>>choixQuit;
						if(choixQuit==1)
						{
							system("cls");
							goto debut;
						}
						break;
					case 2:
						int a;
						cout<<"\n\n\tTaper l ID du votre compte : ";
						cin>>a;
						consulterSolde(a);
						getch();
						cout<<endl<<endl<<"\n\n\n\n\t\t\t1 - Menu Principale\t\t\t\t.. - Quitter"<<endl;
						cout<<endl<<"  \t\t\t\t\t\t\t";
						cin>>choixQuit;
						if(choixQuit==1)
						{
							system("cls");
							goto debut;
						}
						break;
					case 3:
						int b;
						cout<<"\n\n\tTaper l ID du compte a fermer : ";
						cin>>b;
						fermerCompte(b);
						getch();
						cout<<"\n\n\t\t\t1 - Menu Principale\t\t\t\t.. - Quitter"<<endl;
						cout<<endl<<"  \t\t\t\t\t\t\t";
						cin>>choixQuit;
						if(choixQuit==1)
						{
							system("cls");
							goto debut;
						}
						break;
				}
				break;
			case 3:
				menuGoperation(choixGoperation);
				switch(choixGoperation)
				{
					case 1:
						compte cm;
						int x;
						cout<<"\n\n\tTaper l ID du compte a ajouter un montant : ";
						cin>>x;
						ajouterMontant(x,cm);
						getch();
						cout<<"\n\n\n\n\n\t\t\t1 - Menu Principale\t\t\t\t.. - Quitter"<<endl;
						cout<<endl<<"  \t\t\t\t\t\t\t";
						cin>>choixQuit;
						if(choixQuit==1)
						{
							system("cls");
							goto debut;
						}
						break;
					case 2:
						compte cm1;
						int x1;
						cout<<"\n\n\tTaper l ID du compte a retirer un montant : ";
						cin>>x1;
						retirerMontant(x1,cm1);
						getch();
						cout<<"\n\n\n\n\n\t\t\t1 - Menu Principale\t\t\t\t.. - Quitter"<<endl;
						cout<<endl<<"  \t\t\t\t\t\t\t";
						cin>>choixQuit;
						if(choixQuit==1)
						{
							system("cls");
							goto debut;
						}
						break;
					case 3:
						compte cm2,cm3;
						int x2,x3;
						cout<<"\n\n\tTaper l ID du votre compte  : ";
						cin>>x2;
						cout<<"\n\n\tTaper l ID du compte a verser un montant : ";
						cin>>x3;
						verserMontant(x2,cm2,x3,cm3);
						getch();
						cout<<"\n\n\n\n\t\t\t1 - Menu Principale\t\t\t\t.. - Quitter"<<endl;
						cout<<endl<<"  \t\t\t\t\t\t\t";
						cin>>choixQuit;
						if(choixQuit==1)
						{
							system("cls");
							goto debut;
						}
						break;
				}
		}
	return 0;
}























