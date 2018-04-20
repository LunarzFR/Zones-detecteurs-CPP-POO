//
// Created by Acer Predator on 10/04/2018.
//

#ifndef TP_C_DESACTIVERZONEACTION_H
#define TP_C_DESACTIVERZONEACTION_H

#include <string>
#include <iostream>
#include "Action.h"
#include "Batiment.h"


class desactiverZoneAction : public Action {
public:
    desactiverZoneAction(Batiment *bat);
    void executer();

private:
    Batiment *bat;
};


#endif //TP_C_DESACTIVERZONEACTION_H
