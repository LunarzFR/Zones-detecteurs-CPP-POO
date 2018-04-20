//
// Created by Acer Predator on 08/04/2018.
//

#ifndef TP_C_DETECTEUR_H
#define TP_C_DETECTEUR_H

#include <string>
#include <iostream>

class Detecteur {
public:
    Detecteur();
    void activer();
    void desactiver();
    void detecter();

private:
    bool etat = false;
};


#endif //TP_C_DETECTEUR_H
