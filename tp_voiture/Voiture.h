#include <iostream>
#include <string>

class CVoiture {
private:
    std::string marque;
    std::string modele;
    int puissance;
    std::string carburant;
    int vitesse;
    bool moteurDemarre;
    
public:
    CVoiture(std::string marque, std::string modele, int puissance, std::string carburant);
    void afficherInfos() const;
    void demarrer();
    void accelerer(int kmh);
    void ralentir(int kmh);
};

// --- Implémentation des méthodes ---

CVoiture::CVoiture(std::string marque, std::string modele, int puissance, std::string carburant)
    : marque(marque), modele(modele), puissance(puissance), carburant(carburant), vitesse(0), moteurDemarre(false) {}

void CVoiture::afficherInfos() const {
    std::cout << "--- Informations du véhicule ---\n"
              << "Marque : " << marque << "\n"
              << "Modèle : " << modele << "\n"
              << "Puissance : " << puissance << " ch\n"
              << "Carburant : " << carburant << "\n"
              << "Vitesse : " << vitesse << " km/h\n"
              << "Moteur : " << (moteurDemarre ? "Démarré" : "Éteint") << "\n\n";
}

void CVoiture::demarrer() {
    moteurDemarre = true;
    std::cout << "Le moteur de la " << marque << " " << modele << " est en marche.\n";
}

void CVoiture::accelerer(int kmh) {
    if (moteurDemarre) {
        if (kmh > 0) {
            vitesse += kmh;
            std::cout << "Accélération... Vitesse actuelle : " << vitesse << " km/h.\n";
        }
    } else {
        std::cout << "Impossible d'accélérer, le moteur est éteint !\n";
    }
}

void CVoiture::ralentir(int kmh) {
    if (kmh > 0) {
        vitesse -= kmh;
        if (vitesse < 0) {
            vitesse = 0; // La vitesse ne peut pas être négative
        }
        std::cout << "Ralentissement... Vitesse actuelle : " << vitesse << " km/h.\n";
    }
}

// --- Exemple d'utilisation ---
int main() {
    // Création d'une voiture
    CVoiture maVoiture("Peugeot", "308", 130, "Essence");

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
