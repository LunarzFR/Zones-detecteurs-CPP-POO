//
// Created by Acer Predator on 12/04/2018.
//

#include "Telecommande.h"

using namespace std;

void Telecommande::ajouterAction(std::string nom, Action *action) {
    carte[nom] = action;
}

void Telecommande::demarrer() {
    string continuer;
    do {
        cout << endl << "-- TELECOMMANDE --" << endl << "Quel action faire ? ( creer / activer / desactiver / entrer )" << endl << "> ";
        string nom_action;
        cin >> nom_action;
        carte[nom_action]->executer();
        cout << "Voulez-vous continuer a utiliser la telecommande ? (oui/non)" << endl << "> ";
        cin >> continuer;
    }
    while (continuer == "oui");
}
