//
// Created by UltraBook on 4/10/2022.
//

#include "Product.h"
#include <iostream>
#include <string>

using namespace std;
using Domain::Product;

Product::Product(){
    this->name="";
    this->origin="";
    this->expiration="";
    this->quantity=0;
    this->price=0;
}

Product::Product(const Product &original){ //Kopierkonstruktor
    this->name=original.name;
    this->origin=original.origin;
    this->expiration=original.expiration;
    this->quantity=original.quantity;
    this->price=original.price;
}
string Product::getName() const {
    return this->name;
}

string Product::getOrigin() const {
    return this->origin;
}

string Product::getExpiration() const{
    return this->expiration;
}

int Product::getQuantity() const {
    return this->quantity;
}

double Product::getPrice() const {
    return this->price;
}

void Product::setName(string n) {
    this->name=n;
}

void Product::setOrigin(string o) {
    this->origin=o;
}

void Product::setExpiration(string e) {
    this->expiration=e;
}

void Product::setQuantity(int q) {
    this->quantity=q;
}

void Product::setPrice(double p) {
    this->price=p;
}




