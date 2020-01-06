#ifndef STR_H
#define STR_H

#include<iostream>

using namespace std;

//declaration des structures	
struct client
{
	int ID_client;
	char nom[20];
	char prenom[20];
	char profession[50];
	char numTel[10];
};
struct compte
{
	int ID_compte;
	int ID_client;
	float solde;
	char dateOuvert[20];
	char heureOuvert[20];
};

// menu generale 	
void menuGen(int &);
void menuGclient(int &);
void menuGcompte(int &);
void menuGoperation(int &);
void menuQuit(int &);

#endif
