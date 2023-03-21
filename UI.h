//
// Created by UltraBook on 4/12/2022.
//

#ifndef LAB4_OOP_UI_H
#define LAB4_OOP_UI_H
#endif //LAB4_OOP_UI_H
#pragma once

#include "Product.h"
#include "CONTROLLER.h"
#include "REPOSITORY.h"
#include <iostream>

using namespace std;


namespace UI {
    class UI {
    public:
        Controller::ProductController control;
        UI(); //Konstruktor
        UI(const UI &original); //Kopierkonstruktor
        void Initialization(); //Funktion fur die Initialisierung von 10 Produkten
        void printMenu(); //Funktion fur Menuanzeigen
    };
}
