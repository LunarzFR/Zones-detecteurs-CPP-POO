//
// Created by Acer Predator on 10/04/2018.
//

#include "activerZoneAction.h"

using namespace std;

activerZoneAction::activerZoneAction(Batiment *bat) {
    this->bat = bat;
}

void activerZoneAction::executer() {
    cout << "Activer une zone. Entrez le nom de la zone : ";
    string nom;
    cin >> nom;
    bat->activerZone(nom);
    cout << "[INFO] Zone " << nom << " activee." << endl << endl;
}
