#include "voiture.h"
#include <iostream>

using namespace std;

int main() {
    // Création d'une instance de CVoiture
    CVoiture voiture("Peugeot", "208", 100, "Essence");

    // Afficher les informations initiales de la voiture
    cout << "=== Informations de la voiture ===" << endl;
    voiture.affiche();


    // Démarrer la voiture
    cout << "=== Démarrage ===" << endl;
    voiture.demarrer();


    // Accélérer
    cout << "=== Accélération de 50 km/h ===" << endl;
    voiture.accelerer(50);
    // Afficher les informations de la voiture après accélération
    voiture.affiche();

    // Ralentir
    cout << "=== Ralentissement de 20 km/h ===" << endl;
    voiture.ralentir(20);
    // Afficher les informations de la voiture après ralentissement
    voiture.affiche();

    // Arrêter la voiture
    cout << "=== Arrêt ===" << endl;
    voiture.arreter();
    
    // Afficher les informations finales de la voiture
    voiture.affiche();

    return 0;
}
