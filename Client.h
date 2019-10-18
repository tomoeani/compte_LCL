#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Client
{
private:
    int CIN;
    string Nom;
    string Prenom;
    int Num;
    int mdp;

public:
   
    void Creation();
    void Connexion();
    
};

#endif