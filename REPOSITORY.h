//
// Created by UltraBook on 4/11/2022.
//

#ifndef LAB4_OOP_REPOSITORY_H
#define LAB4_OOP_REPOSITORY_H
#endif //LAB4_OOP_REPOSITORY_H
#pragma once

#include <iostream>
#include <vector>
#include "Product.h"

using namespace std;

namespace Repo {
    class Repository {
    private:
        vector<Domain::Product> List_Products; //Vektor von Typ Product, mit der Name List_Products
    public:
        Repository() {
            List_Products = {}; //Initialisation mit leere Vektor
        }

        Repository(const Repository &original);

        void addProduct(string name, string origin, string expiration, int quantity, double price);

        void removeProduct(string name, string origin);

        void printByString(string find_string);

        void printByMissingProducts(int quantity);

        void printByExpiration();

        vector<Domain::Product> get_all() {
            return List_Products;
        }
    };
}









