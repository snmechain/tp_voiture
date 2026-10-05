#include "voiture.h"
#include <iostream>

using namespace std;

// Constructeur
CVoiture::CVoiture(string marque, string modele, int puissance, string carburant) {
    this->marque = marque;
    this->modele = modele;
    this->puissance = puissance;
    this->carburant = carburant;
    this->vitesse = 0;
}

//Accélérer
void CVoiture::accelerer(int valeur) {
    vitesse += valeur;
}

//Afficher les informations
void CVoiture::affiche()
{
    cout << "Marque: " << marque << endl;
    cout << "Modèle: " << modele << endl;
    cout << "Puissance: " << puissance << " CV" << endl;
    cout << "Carburant: " << carburant << endl;
    cout << "Vitesse actuelle: " << vitesse << " km/h" << endl;
}

// Arrêter
void CVoiture::arreter() {
    vitesse = 0;
}

// Démarrer
void CVoiture::demarrer() {
    vitesse = 0;
}

// Ralentir
void CVoiture::ralentir(int valeur) {
    vitesse -= valeur;
    if (vitesse < 0) {
        vitesse = 0; // La vitesse ne peut pas être négative
    }
}