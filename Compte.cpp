#include <iostream>
#include "Compte.h"


using namespace std;


void Compte::Menu()
{
int n;
Compte a;
float c , d;


cout << "-------------------------------------------------------------------"<< endl;
cout << "                           Opération                               "<< endl;
cout << "-------------------------------------------------------------------\n"<< endl;

cout << "1) Déposer \n" << endl;
cout << "2) Faire un retrait \n" << endl;
cout << "3) Consulter votre compte \n" << endl;
cout << "4) Commander un chèquier \n" << endl; 
cout << "5) Quitter \n" << endl;

cin >> n;

switch(n) 
   {
      case 1:
        a.Crediter(c);
        a.Menu( );


         break;

      case 2:
         a.Debiter(c,d);
         a.Menu();
          break;

      case 3:
         a.Consulter(c,d);
         a.Menu();
         
          break;

      case 4:
         
         
          break;




      default:
         break;


   }






}

void Compte::Compte(){
	solde = 0 ;
	Retrait = 0;
	NumUnique = 0;


	if(NumUnique == NumUnique)
	{
		NumUnique = NumUnique + 1;
	}
}

float Compte::Crediter(float solde)
{   
	float Depot;
	solde = solde;

	cout <<"Votre solde est de "<< solde << endl;


	cout << "Entrer la sommme que vous voulez déposer : " << endl;
	cin >> Depot;

	solde = solde + Depot;

	cout << "Vous avez "<< solde << " euro sur votre compte ." << endl;

	cout <<"Votre solde est de "<< solde << endl;


	return solde;
	
}

float Compte::Debiter(float solde , float Retrait)
{
	
	float Retirer;

	cout <<"Votre solde est de "<< solde << endl;

	cout << "Entrer la sommme que vous voulez retirer : " << endl;
	cin >> Retirer;

	solde = solde - Retirer;
	Retrait = Retirer;

	cout << "Vous avez "<< solde << " euro sur votre compte ." << endl;

	cout << "Vous avez retirer " << Retrait << " euro ." << endl;

	return solde;
	
}

void Compte::Consulter(float solde , float Retrait)
{
	
	cout <<"Votre solde est de "<< solde << endl;
	cout <<"Votre dernier retrait est de "<< Retrait << endl;



}
	
/*void Client::Commander()
{
	cout << " "


}*/