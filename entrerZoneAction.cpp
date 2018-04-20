//
// Created by Acer Predator on 10/04/2018.
//

#include "entrerZoneAction.h"

using namespace std;

entrerZoneAction::entrerZoneAction(Batiment *bat) {
    this->bat = bat;
}

void entrerZoneAction::executer() {
    cout << "Dans quelle zone voulez vous entrer : ";
    string nom;
    cin >> nom;
    bat->entrerZone(nom);
    cout << "[INFO] Vous etes maintenant dans la zone " << nom << endl << endl;
}
