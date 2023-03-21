//
// Created by UltraBook on 4/10/2022.
//

#ifndef LAB4_OOP_DRUGSTORE_H
#define LAB4_OOP_DRUGSTORE_H
#endif //LAB4_OOP_DRUGSTORE_H
#pragma once

#include <iostream>
using namespace std;

namespace Domain{
    class Product{
    private:
        string name;
        string origin;
        string expiration;
        int quantity;
        double price;
    public:
        Product();
        Product(const Product &original);
        Product(string name, string origin, string expiration, int quantity, float price);

        string getName() const;
        string getOrigin() const;
        string getExpiration() const;
        int getQuantity() const;
        double getPrice() const;

        void setName(string n);
        void setOrigin(string o);
        void setExpiration(string d);
        void setQuantity(int q);
        void setPrice(double p);
    };
}


