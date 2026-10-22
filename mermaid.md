```mermaid

erDiagram
    CLIENT {
        int id PK "Clé primaire"
        string nom
        string email
    }
    
    COMMANDE {
        int id PK "Clé primaire"
        int client_id FK "Clé étrangère"
        date date_creation
        float total
    }

    PRODUIT {
        int id PK "Clé primaire"
        string libelle
        float prix
    }

    LIGNE_COMMANDE {
        int commande_id PK,FK
        int produit_id PK,FK
        int quantite
    }

    %% Définition des relations
    CLIENT ||--o{ COMMANDE : "passe"
    COMMANDE ||--|{ LIGNE_COMMANDE : "contient"
    PRODUIT ||--o{ LIGNE_COMMANDE : "figure dans"
