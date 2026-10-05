#ifndef VOITURE_H
#define VOITURE_H

#include <string>

class CVoiture {
private:
    string carburant;
    string marque; 
    string modele;
    int puissance;
    int vitesse;

public:
    CVoiture(string marque, string modele, int puissance, string carburant);

    void accelerer(int);
    void affiche();
    void arreter();
    void demarrer();
    void ralentir(int);
};

#endif
