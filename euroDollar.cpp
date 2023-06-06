#include <iostream>

using namespace std;

int main()
{
    double euroUtilisateur(0);
    double const ratioDollar = 1.20;

    cout << "Convertisseur Euro -> Dollar" << endl;

    cout << "entrez un montant a convertir en dollar : " << endl;
    cin >> euroUtilisateur;

    double resultat = euroUtilisateur * ratioDollar;

    if (euroUtilisateur < 0)
    {
        cout << "Saisir incorrect !!!" << endl;
    }
    else
    {
        cout << euroUtilisateur <<"€ équivaut à " << resultat << "$." << endl;
    }
    
    return 0;
}