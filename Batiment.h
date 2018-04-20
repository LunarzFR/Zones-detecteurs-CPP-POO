//
// Created by Acer Predator on 08/04/2018.
//

#ifndef TP_C_BATIMENT_H
#define TP_C_BATIMENT_H

#include <string>
#include <iostream>
#include <map>
#include "Detecteur.h"

class Batiment {
public:
    Batiment();
    void creerZone(std::string nom);
    void activerZone(std::string nom);
    void desactiverZone(std::string nom);
    void entrerZone(std::string nom);

private:
    std::map<std::string, Detecteur> zone;
};


#endif //TP_C_BATIMENT_H
