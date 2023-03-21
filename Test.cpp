//
// Created by UltraBook on 4/20/2022.
//

#include "Test.h"
#include <cassert>

using namespace std;

void Test::TestAddProduct() {
    rep.addProduct("Nospa","Romania","02/07",20,15);
    rep.addProduct("Vitamine","Austria","12/04",15,30);
    rep.addProduct("Brufen","Ungaria","30/12",25,8);
    rep.addProduct("Paduden","UK","15/11",10,10);
    assert(rep.get_all().size()==4);
}

void Test::TestDeleteProduct() {
    rep.addProduct("Nospa","Romania","02/07",20,15);
    rep.addProduct("Vitamine","Austria","12/04",15,30);
    rep.addProduct("Brufen","Ungaria","30/12",25,8);
    rep.removeProduct("Vitamine","Austria");
    assert(rep.get_all().size()==2);
}

void Test::TestGetterAndSetter() {
    rep.addProduct("Septolete","Italia","02/10",8,10);
    assert(rep.get_all()[0].getName()=="Septolete");
    assert(rep.get_all()[0].getQuantity()==8);
    assert(rep.get_all()[0].getPrice()==10);
}

void Test::AllTest() {
    TestAddProduct();
    TestDeleteProduct();
    TestGetterAndSetter();
}




