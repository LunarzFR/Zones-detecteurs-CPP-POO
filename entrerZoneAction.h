//
// Created by Acer Predator on 10/04/2018.
//

#ifndef TP_C_ENTRERZONEACTION_H
#define TP_C_ENTRERZONEACTION_H

#include <string>
#include <iostream>
#include "Batiment.h"
#include "Action.h"

class entrerZoneAction : public Action {
public:
    entrerZoneAction(Batiment *bat);
    void executer();

private:
    Batiment *bat;
};


#endif //TP_C_ENTRERZONEACTION_H
