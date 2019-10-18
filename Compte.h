#ifndef COMPTE_H
#define COMPTE_H
#include <string>
#include <iostream>
using namespace std;

class compte
{

private:
float solde;
float numero_unique;

public:
   compte();	//construteur
  ~compte();	//destruteur

void menu();
float credit(float solde);
float credit_un_autre_compte(float solde);
float debiter(float solde);
void consulter();
float virement(float solde);
void commande_cheque();
void affiche();


};

#endif
