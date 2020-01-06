#include<iostream>
#include<conio.h>
using namespace std;

void aff(int * , const int &);
void lireTab(int * , const int &);
int rechdich(int *, const int & , const int &);
void ins(int *t , int & , const int &);
void triRapide(int * , const int & );

int main()
{
	int a,*t,e;
	cout<<"Taper la dimension : ";
	cin>>a;
	t=new int[a];
	lireTab(t,a);
	system("cls");
	//cin>>e;
	//cout<<rechdich(t,a,e)<<endl<<endl;
	aff(t,a);
	cout<<endl<<endl;
	triRapide(t,a);
	
	
	
	aff(t,a);
	cout<<endl<<endl<<a;
	delete[]t;
}

void triRapide(int *t , const int &n)
{
	
}





void lireTab(int *t , const int &n)
{
	for(int i=0;i<n;i++)
	{
		cin>>t[i];
	}
}
void aff(int *t , const int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<t[i]<<endl;
	}
}
