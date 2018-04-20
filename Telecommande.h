//
// Created by Acer Predator on 12/04/2018.
//

#ifndef TP_C_TELECOMMANDE_H
#define TP_C_TELECOMMANDE_H

#include <string>
#include <iostream>
#include <map>

#include "Action.h"

class Telecommande {
private:

    std::map<std::string, Action*> carte;

public:
    void ajouterAction(std::string nom, Action *action);
    void demarrer();

};


#endif //TP_C_TELECOMMANDE_H
