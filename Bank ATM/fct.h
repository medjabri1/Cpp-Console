#ifndef FCT_H
#define FCT_H

#include<iostream>
#include<fstream>
#include<string>

#include "str.h"

using namespace std;

//Client
void ajouterClient(client *);
void supprimerClient(int );
void modifierClient(int );
void infoClient(int );

//Others
void getDate(char );
float getSolde(int );
void infoCompte(int , compte *);
void modifierCompte(int , compte *);

//Compte
void creeCompte(compte *);
void consulterSolde(int );
void fermerCompte(int );

//Operation
void ajouterMontant(int , compte );
void retirerMontant(int , compte );
void verserMontant(int , compte , int , compte );

#endif
