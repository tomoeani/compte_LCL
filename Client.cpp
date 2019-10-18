#include <iostream>
#include "Client.h"


using namespace std;


void Client::Creation()
{
	cout << "-------------------------------------------------------------------" << endl;
	cout << "                          Inscription                              " << endl;
	cout << "------------------------------------------------------------------- \n" << endl;

	cout<<"Entrer votre nom : " << endl;
	cin >> Nom;

	cout<<"Entrer votre prénom : " << endl;
	cin >> Prenom;

	cout <<"Entrer le numéro de votre carte d'identité :"<< endl;
	cin >> CIN;

	cout << "Entrer votre numéro de téléphone : "<< endl;
	cin >> Num;

	cout << "Entrer votre mot de passe(uniquement en chiffre) : "<< endl;
	cin >> mdp;
	
}

void Client::Connexion()
{
	cout << "-----------------------------------------------------------------" << endl;
	cout << "                          Connexion                              " << endl;
	cout << "----------------------------------------------------------------- \n" << endl;
	
	cout << "Nom : " << endl;
	cin >> Nom;
	
	cout << "Mot de passe : " <<endl;
	cin >> mdp;


	cout << "Vous êtes connecté à votre compte LCL ! " <<endl;


}

