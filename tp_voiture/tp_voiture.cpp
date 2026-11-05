// tp_voiture.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

// --- Exemple d'utilisation ---
int main() {
    // Création d'une voiture
    CVoiture maVoiture("Peugeot", "3008", 130, "Essence");

    maVoiture.afficherInfos();

    // Essayer d'accélérer moteur éteint
    maVoiture.accelerer(50);

    // Démarrer et accélérer
    maVoiture.demarrer();
    maVoiture.accelerer(50);
    maVoiture.accelerer(30);

    maVoiture.afficherInfos();

    // Ralentir
    maVoiture.ralentir(40);
    maVoiture.afficherInfos();

    return 0;
}
