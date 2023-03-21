//
// Created by UltraBook on 4/11/2022.
//

#include "CONTROLLER.h"
#include "REPOSITORY.h"
#include "Product.h"
#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using Controller::ProductController;
using namespace std;

ProductController::ProductController () {}

void Controller::ProductController::addProdAtrib(string name, string origin, string expiration, int quantity,double price) { //erstellen wir ein neues Produkt mit den Parametern
    Repository.addProduct(name,origin,expiration,quantity,price); //apelam functia add de repository
}

void Controller::ProductController::deleteProdAtrib(string name, string origin) {
    Repository.removeProduct(name,origin);
}

void Controller::ProductController::printByString(string find_string){
    Repository.printByString(find_string);
}

void Controller::ProductController::printByMissingProd(int quantity){
    Repository.printByMissingProducts(quantity);
}

void Controller::ProductController::printByExpiration(){
    Repository.printByExpiration();
}


void Controller::ProductController::TestAddProduct() {
    Repository.addProduct("Nospa","Romania","02/07",20,15);
    Repository.addProduct("Vitamine","Austria","12/04",15,30);
    Repository.addProduct("Brufen","Ungaria","30/12",25,8);
    Repository.addProduct("Paduden","UK","15/11",10,10);
    assert(Repository.get_all().size()==4);
}

void Controller::ProductController::TestDeleteProduct() {
    Repository.addProduct("Nospa","Romania","02/07",20,15);
    Repository.addProduct("Vitamine","Austria","12/04",15,30);
    Repository.addProduct("Brufen","Ungaria","30/12",25,8);
    Repository.removeProduct("Vitamine","Austria");
    assert(Repository.get_all().size()==3);
}

void Controller::ProductController::TestGetterAndSetter() {
    Repository.addProduct("Septolete","Italia","02/10",8,10);
    assert(Repository.get_all()[0].getName()=="Nospa");
    assert(Repository.get_all()[0].getQuantity()==40);
    assert(Repository.get_all()[0].getPrice()==15);
}

void Controller::ProductController::AllTest() {
    TestAddProduct();
    TestDeleteProduct();
    TestGetterAndSetter();
}
