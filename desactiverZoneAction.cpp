//
// Created by Acer Predator on 10/04/2018.
//

#include "desactiverZoneAction.h"

using namespace std;

desactiverZoneAction::desactiverZoneAction(Batiment *bat) {
    this->bat = bat;
}

void desactiverZoneAction::executer() {
    cout << "Desactiver une zone. Entrez le nom de la zone : ";
    string nom;
    cin >> nom;
    bat->desactiverZone(nom);
    cout << "[INFO] OK, zone " << nom << " desactivee." << endl << endl;
}