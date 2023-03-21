//
// Created by UltraBook on 4/11/2022.
//

#include "REPOSITORY.h"
#include "Product.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using Repo::Repository;


static bool byName(const Domain::Product &p1, Domain::Product &p2) { return p1.getName() < p2.getName(); }

static bool byExpiration(Domain::Product &p1, Domain::Product &p2) { return p1.getExpiration() < p2.getExpiration(); }

void Repository::addProduct(string name, string origin, string expiration, int quantity, double price) {
    int new_quantity;
    bool already_exist = false;
    for (int i = 0; i < List_Products.size(); i++) {
        if (List_Products[i].getName() == name and List_Products[i].getOrigin() == origin) {
            cout << "The Product is already in deposit!" << endl;
            new_quantity = List_Products[i].getQuantity() + quantity;
            List_Products[i].setQuantity(new_quantity);
            already_exist = true;
        }
    }
    if (!already_exist) {
        Domain::Product new_prod;
        new_prod.setName(name);
        new_prod.setOrigin(origin);
        new_prod.setPrice(price);
        new_prod.setQuantity(quantity);
        new_prod.setExpiration(expiration);
        List_Products.push_back(new_prod);
    }
}

void Repository::removeProduct(string name, string origin) {
    bool found = false;
    for (int i = 1; i < List_Products.size(); i++) {
        if (List_Products[i].getName() == name and List_Products[i].getOrigin() == origin) {
            List_Products.erase(List_Products.begin() + i);
            found = true;
            cout << "Product was removed" << endl;
        }
    }
    if (!found)
        cout << "Product does not exist" << endl;
}

void Repository::printByString(string find_string) {
    bool found_string = false;
    if (find_string == "empty") {
        for (int i = 0; i < List_Products.size(); i++) {
            sort(List_Products.begin(), List_Products.end(), byName);
            cout << "Name:" << List_Products[i].getName() << " " << "Origin:" << List_Products[i].getOrigin() << " "
                 << "Price:" << List_Products[i].getPrice() << " " << "Amount:" << List_Products[i].getQuantity() << " "
                 << "Expiration date:" << List_Products[i].getExpiration() << endl;
        }
        return;
    }
    for (int i = 0; i < List_Products.size(); i++) {
        sort(List_Products.begin(), List_Products.end(), byName);
        if (find_string == List_Products[i].getName()) {
            cout << "Name:" << List_Products[i].getName() << " " << "Origin:" << List_Products[i].getOrigin() << " "
                 << "Price:" << List_Products[i].getPrice() << " " << "Amount:" << List_Products[i].getQuantity() << " "
                 << "Expiration date:" << List_Products[i].getExpiration() << endl;
            found_string = true;
        }
    }
    if (!found_string)
        cout << "Product was not found" << endl;
}

void Repository::printByMissingProducts(int quantity) {
    bool found = false;
    for (int i = 0; i < List_Products.size(); i++)
        if (List_Products[i].getQuantity() <= quantity) {
            cout << "Name:" << List_Products[i].getName() << " " << "Origin:" << List_Products[i].getOrigin() << " "
                 << "Price:" << List_Products[i].getPrice() << " " << "Amount:" << List_Products[i].getQuantity() << " "
                 << "Expiration date:" << List_Products[i].getExpiration() << endl;
            found = true;
        }
    if (!found)
        cout << "There is no short supply" << endl;
}

void Repository::printByExpiration() {
    bool found = false;
    for (int i = 0; i < List_Products.size(); i++) {
        sort(List_Products.begin(), List_Products.end(), byExpiration);
        cout << "Name:" << List_Products[i].getName() << " " << "Origin:" << List_Products[i].getOrigin() << " "
             << "Price:" << List_Products[i].getPrice() << " " << "Amount:" << List_Products[i].getQuantity() << " "
             << "Expiration date:" << List_Products[i].getExpiration() << endl;
        found = true;
    }
    if (!found)
        cout << "There are no proper products" << endl;
}













