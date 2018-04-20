//
// Created by Acer Predator on 08/04/2018.
//

#include "Batiment.h"

using namespace std;

Batiment::Batiment() {}

void Batiment::creerZone(std::string nom) {
    Detecteur Detecteur;
    zone[nom] = Detecteur;
    // cout << "[INFO] La zone " << nom << " a bien ete creee !" << endl << endl;
}

void Batiment::activerZone(std::string nom) {
    zone[nom].activer();
    // cout << "[INFO] La zone " << nom << " a bien ete activee !" << endl << endl;
}

void Batiment::desactiverZone(std::string nom) {
    zone[nom].desactiver();
    // cout << "[INFO] La zone " << nom << " a bien ete desactivee !" << endl << endl;
}

void Batiment::entrerZone(std::string nom) {
    zone[nom].detecter();
    // cout << "[INFO] Vous etes bien entree dans la zone " << nom << endl << endl;
}