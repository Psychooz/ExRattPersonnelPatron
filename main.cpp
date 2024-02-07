#include <iostream>
#include "classheaders.h"
using namespace std;
int main() {
    cout << "Test de la classe Personnel:" << endl;
    Personnel p1("Ali", "Manager", 50000);
    cout << "Informations de Personnel1:" << endl;
    p1.afficher_personnel();

    cout << endl;

    cout << "Test de la classe Patron:" << endl;
    Patron pa1("Youssef", "CEO", 100000, 20000, "BMW");
    cout << "Informations de pa1:" << endl;
    pa1.afficher_patron();

    cout << endl;

    cout << "Test de la saisie pour le personnel:" << endl;
    Personnel p2("","",0);
    cin >> p2;
    cout << "Informations de personnel2 après saisie:" << endl;
    p2.afficher_personnel();

    cout << endl;
    cout << "Test de la saisie pour le patron:" << endl;
    Patron pa2("", "", 0, 0, "");
    cin >> pa2;
    cout << "Informations de patron2 après saisie:" << endl;
    pa2.afficher_patron();

    return 0;
}
