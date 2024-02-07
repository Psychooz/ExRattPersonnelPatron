#ifndef CLASSHEADERS_H_INCLUDED
#define CLASSHEADERS_H_INCLUDED
#include <string>


class Personnel {
protected:
    std::string nom;
    std::string position;
    double salaire;
public:
    Personnel(std::string n, std::string p, double s);
    void afficher_personnel();
    friend std::istream& operator>>(std::istream& input, Personnel& P);
    bool operator==(const Personnel & p);
};

class Patron : public Personnel {
private:
    double bonus_annuel;
    std::string voiture_marque;
public:
    Patron(std::string n, std::string p, double s, double ba, std::string vm);
    void afficher_patron();
    friend std::istream& operator>>(std::istream& input, Patron& Pr);
    bool operator==(const Patron Pr);
};
#endif // CLASSHEADERS_H_INCLUDED
