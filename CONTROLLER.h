//
// Created by UltraBook on 4/11/2022.
//

#ifndef LAB4_OOP_CONTROLLER_H
#define LAB4_OOP_CONTROLLER_H
#endif //LAB4_OOP_CONTROLLER_H
#pragma once

#include <string>
#include <vector>
#include "Product.h"
#include "REPOSITORY.h"

namespace Controller{
    class ProductController{
    public:
        Repo::Repository Repository, repo;
        ProductController();

        void TestAddProduct();
        void TestDeleteProduct();
        void TestGetterAndSetter();
        void AllTest();

        void addProdAtrib(string name, string origin,string expiration,int quantity, double price);
        void deleteProdAtrib(string name, string origin);
        void printByString(string find_string);
        void printByMissingProd(int quantity);
        void printByExpiration();

    };
}
