//
// Created by Acer Predator on 08/04/2018.
//

#include "Detecteur.h"

using namespace std;

Detecteur::Detecteur() {

}

void Detecteur::activer() {
    etat = true;
}

void Detecteur::desactiver() {
    etat = false;
}

void Detecteur::detecter() {
    if (etat == true) {
        std::cout << "Signal envoye !" << endl;
    }
    else {
        std::cout << "Aucun signal !" << endl;
    }
}