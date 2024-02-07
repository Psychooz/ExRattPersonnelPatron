#include "classheaders.h"
#include <string>
#include <iostream>

Personnel::Personnel(std::string n, std::string p, double s){
    nom = n;
    position = p;
    salaire = s;
}
void Personnel::afficher_personnel() {
    std::cout << "Nom : " << nom << " Position : " << position << " Salaire: " << salaire << std::endl;
}

std::istream& operator>>(std::istream& input, Personnel& P) {
    std::cout << "Entrez le nom: ";
    input >> P.nom;
    std::cout << "Entrez la position: ";
    input >> P.position;
    std::cout << "Entrez le salaire: ";
    input >> P.salaire;
    return input;
}

bool Personnel::operator==(const Personnel & p) {
    if(nom == p.nom && position == p.position && salaire == p.salaire){
        return true;
    }
    return false;
}
Patron::Patron(std::string n, std::string p, double s, double ba, std::string vm)
    : Personnel(n, p, s), bonus_annuel(ba), voiture_marque(vm) {}
void Patron::afficher_patron() {
    Personnel::afficher_personnel();
    std::cout << "Bonus Annuel: " << bonus_annuel << ", Marque Voiture: " << voiture_marque << std::endl;
}

std::istream& operator>>(std::istream& input, Patron& Pr) {
    Personnel& personnel = Pr;
    input >> personnel;
    std::cout << "Entrez le bonus annuel: ";
    input >> Pr.bonus_annuel;
    std::cout << "Entrez la marque de la voiture de fonction: ";
    input >> Pr.voiture_marque;
    return input;
}

bool Patron::operator==(const Patron Pr) {
    if(nom == Pr.nom && position == Pr.position && salaire == Pr.salaire && bonus_annuel == Pr.bonus_annuel && voiture_marque == Pr.voiture_marque){
        return true;
    }
    return false;
}
