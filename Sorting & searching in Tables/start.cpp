#include "start.h"
void choix(int &a)
{
	system("color F5");
	cout<<"\n\t\t\t\t\tBONJOUR"<<endl;
	cout<<"\n\t\t\t     Quelle operation voulez vous ?"<<endl<<endl<<endl<<endl;
	cout<<"\t\t1 - Rechreche Sequentielle dans un tableau triee ; "<<endl<<endl;
	cout<<"\t\t2 - Rechreche Sequentielle dans un tableau non triee ; "<<endl<<endl;
	cout<<"\t\t3 - Rechreche Dichotomique dans un tableau triee ; "<<endl<<endl;
	cout<<"\t\t4 - Insertion dans un tableau non triee ; "<<endl<<endl;
	cout<<"\t\t5 - Insertion dans un tableau triee ; "<<endl<<endl;
	cout<<"\t\t6 - Suppression dans un tableau triee ; "<<endl<<endl;
	cout<<"\t\t7 - Tri d'un tableau 'Tri par selection' ; "<<endl<<endl;
	cout<<"\t\t8 - Tri d'un tableau 'Tri par insertion' ; "<<endl<<endl;
	cout<<"\t\t9 - Tri d'un tableau 'Tri rapide' ; "<<endl<<endl;
	cout<<"\n\t\t\t\t    Choix : ";
	cin>>a;
	system("cls");
	return;
}
void lireTab(int *T , const int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\t";
		cin>>T[i];
	}
	system("cls");
}
void afficheTab(int *T , const int &n)
{
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<T[i];
	}
	cout<<endl;
}
