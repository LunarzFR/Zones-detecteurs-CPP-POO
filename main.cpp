#include "Detecteur.h"
#include "Batiment.h"
#include "Telecommande.h"
#include "Action.h"
#include "CreerZoneAction.h"
#include "activerZoneAction.h"
#include "desactiverZoneAction.h"
#include "entrerZoneAction.h"

using namespace std;

void testZonage() {
    // Création d'un batiment
    Batiment BAT;

    // Création des Zones
    BAT.creerZone("livraison");
    BAT.creerZone("accueil");
    BAT.creerZone("magasin");

    // Activation des Zones
    BAT.activerZone("livraison");
    BAT.activerZone("magasin");

    // Désactivation
    BAT.desactiverZone("accueil");

    // Test des Zones
    BAT.entrerZone("accueil");
    BAT.entrerZone("magasin");
}

int main() {

    // Utilisation de la fonction testZonage
    cout << "-- FONCTION TEST ZONAGE --" << endl;

    testZonage();


    // Fonction main definitive

    // Création d'un nouveau batiment vide
    Batiment harny;
    // Création d'une telecommande
    Telecommande valentin;

    valentin.ajouterAction("creer", new CreerZoneAction(&harny));
    valentin.ajouterAction("activer", new activerZoneAction(&harny));
    valentin.ajouterAction("entrer", new entrerZoneAction(&harny));
    valentin.ajouterAction("desactiver", new desactiverZoneAction(&harny));

    // Démarrage de la télécommade valentin
    valentin.demarrer();

    return 0;

}