#include <iostream>
#include "start.h"
#include "functions.h"
using namespace std;

int main()
{
	int choice,*Tab,n,e;
	choix(choice); //choix de l'operation "start.cpp"
	
	cout<<"\n\tTaper la dimension de votre tableau : ";
	cin>>n;
	cout<<endl;
	Tab=new int[n]; //allocation dynamique
	
	lireTab(Tab,n); // start.cpp
	cout<<"\n\tVotre tableau initial est : "<<endl;
	afficheTab(Tab,n); // start.cpp
	
	switch(choice)
	{
		case 1: 
			cout<<"\n\tTaper votre element : ";
			cin>>e;
			cout<<endl<<"\tVotre element est (ou doit etre) dans la position : "<<rechSeqTriee(Tab,n,e); //functions.cpp
			break;
		case 2: 
			cout<<"\n\tTaper votre element : ";
			cin>>e;
			cout<<endl<<"\tVotre element est dans la position : "<<rechSeqNTriee(Tab,n,e); //functions.cpp
			break;
		case 3: 
			cout<<"\n\tTaper votre element : ";
			cin>>e;
			cout<<endl<<"\tVotre element est dans la position : "<<rechDicho(Tab,n,e); //functions.cpp
			break;
		case 4:
			cout<<"\n\tTaper votre element : ";
			cin>>e;
			cout<<endl<<"\n\n\tVotre tableau apres insertion : "<<endl;
			insNTriee(Tab,n,e);
			afficheTab(Tab,n);
			cout<<endl<<"\t(On a juste ajoutee l'element a la fin)."<<endl;
			break;
		case 5:
			cout<<"\n\tTaper votre element : ";
			cin>>e;
			cout<<endl<<"\n\n\tVotre tableau apres insertion : "<<endl;
			insTriee(Tab,n,e);
			afficheTab(Tab,n);
			break;
		case 6:
			cout<<"\n\tTaper votre element : ";
			cin>>e;
			cout<<endl<<"\n\n\tVotre tableau apres suppression : "<<endl;
			supTriee(Tab,n,e);
			afficheTab(Tab,n);
			break;
		case 7:
			cout<<endl<<"\n\n\tVotre tableau apres le tri (Par selection) : "<<endl;
			triSel(Tab,n);
			afficheTab(Tab,n);
			break;
		case 8:
			cout<<endl<<"\n\n\tVotre tableau apres le tri (Par insertion) : "<<endl;
			triIns(Tab,n);
			afficheTab(Tab,n);
			break;
		case 9:
			cout<<endl<<"\n\n\tVotre tableau apres le tri (Tri rapide) : "<<endl;
			triRapide(Tab,1,n);
			afficheTab(Tab,n);
			break;
	}
	return 0;
}
