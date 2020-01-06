#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<iostream>
using namespace std;

int rechSeqTriee(int * , const int & , const int & );
int rechSeqNTriee(int * , const int & , const int & );
int rechDicho(int * , const int & , const int &);
void insNTriee(int * , int & , const int & );
void insTriee(int * , int & , const int & );
void supTriee(int * , int & , const int & );
void triSel(int * , const int &);
void triIns(int * , const int &);
int partition(int * , int , int );
void triRapide(int * , int , int );

#endif
