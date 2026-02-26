#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declaration and assignment of variables.
    float montant = 0 ;
    float quotient = 0 ;
    string espaces = "" ;
    string tirets = "" ;

    // Input of the amount and validation of the entry.
    cout << "Convertisseur de monnaie Canadienne vers l'Euro." << endl ;
    cout << "Veuillez entrer le montant à convertir en dollars Canadiens :" << endl ;
    cin >> montant ;

    while (montant < 0)
    {
        cout << "Veuillez entrer un montant valide :" << endl ;
        cin >> montant ;
    }

    // Code for formatting the table to handle variable-width columns.
    quotient = montant / 10 ;
    while (quotient >= 1)
    {
        quotient = quotient / 10 ;
        espaces = espaces + " " ;
        tirets = tirets + "---" ;
    }

    // Display of the table.
    cout << "\nVoici le résultat de la conversion selon le taux de change :" << endl ;
    cout << "------------------------------" << tirets << endl ;
    cout << "|Taux   |1.35" << espaces << "  |1.40" << espaces << "  |1.60" << espaces << "  |" << endl ;
    cout << "------------------------------" << tirets << endl ;
    cout << "|Montant|" << setprecision(2) << fixed << montant*1.35 << " $|" << montant*1.4 << " $|" << montant*1.6 << " $|" << endl ;
    cout << "------------------------------" << tirets << endl ;

    return 0 ;
}
