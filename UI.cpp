//
// Created by UltraBook on 4/12/2022.
//

#include "UI.h"
#include <string.h>
#include <iostream>

using namespace std;

UI::UI::UI() {}

void UI::UI::Initialization() {
    control.repo.addProduct("Nospa", "Romania", "02/07", 20, 15);
    control.addProdAtrib("Vitamine", "Austria", "12/04", 15, 30);
    control.addProdAtrib("Brufen", "Ungaria", "30/12", 25, 8);
    control.addProdAtrib("Paduden", "UK", "15/11", 10, 10);
    control.addProdAtrib("Septolete", "Italia", "02/10", 8, 10);
    control.addProdAtrib("Ospamox", "Italia", "08/03", 30, 40);
    control.addProdAtrib("Algocalmin", "Romania", "11/06", 12, 7);
    control.addProdAtrib("Strepsils", "UK", "12/08", 15, 9);
    control.addProdAtrib("HotDrink", "Belgia", "27/03", 18, 12);
    control.addProdAtrib("Augumentin", "Spania", "01/01", 10, 20);
}

void UI::UI::printMenu() {
    int opt;
    do {
        cout << "-----------------------------------------";
        cout << " MENU ";
        cout << "-----------------------------------------";
        cout << endl;
        cout << "1.Add Product" << endl;
        cout << "2.Remove Product" << endl;
        cout << "3.List Products with specific strings" << endl;
        cout << "4.List Products with smaller amount" << endl;
        cout << "5.List Products sortiert by expiration date" << endl;
        cout << "6.Exit" << endl;

        cout << "Choose an option: ";
        cin >> opt;

        if (opt == 1) {
            string name, origin, expiration;
            int quantity;
            double price;
            cout << "Name: ";
            cin >> name;
            cout << endl;
            cout << "Origin: ";
            cin >> origin;
            cout << endl;
            cout << "Expiration date: ";
            cin >> expiration;
            cout << endl;
            cout << "Quantity: ";
            cin >> quantity;
            cout << endl;
            cout << "Price: ";
            cin >> price;
            cout << endl;
            control.addProdAtrib(name, origin, expiration, quantity, price);
        } else if (opt == 2) {
            string name, origin;
            cout << "Name: ";
            cin >> name;
            cout << endl;
            cout << "Origin: ";
            cin >> origin;
            cout << endl;
            control.deleteProdAtrib(name, origin);
        } else if (opt == 3) {
            string find_string;
            cout << "String: ";
            cin >> find_string;
            cout << endl;
            control.printByString(find_string);
        } else if (opt == 4) {
            int quantity;
            cout << "Value smaller or equal as:";
            cin >> quantity;
            cout << endl;
            control.printByMissingProd(quantity);
        } else if (opt == 5) {
            control.printByExpiration();
        }
    } while (opt != 6);
}

