//
// Created by Acer Predator on 10/04/2018.
//

#include "CreerZoneAction.h"

using namespace std;

CreerZoneAction::CreerZoneAction(Batiment *bat) {
    this->bat = bat;
}

void CreerZoneAction::executer() {
    cout << "Creer une zone. Entrez le nom de la zone : ";
    string nom;
    cin >> nom;
    bat->creerZone(nom);
    cout << "[INFO] OK, zone " << nom << " creee." << endl << endl;
}