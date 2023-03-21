#include <iostream>
#include "UI.h"

int main() {
    UI::UI user_interface;
    Controller::ProductController obj_test;
    obj_test.AllTest();
    user_interface.Initialization();
    user_interface.printMenu();

    return 0;
}

