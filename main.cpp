#include <iostream>

#include "menu.h"
#include "menuitem.h"
#include "visitor.h"

void output(AbstractMenuItem* menu)
{
    Visitor v;
    menu->apply(&v);
}

int main(int argc, char *argv[])
{
    auto mainMenu = std::make_unique<Menu>("Menu");

    auto beverages = std::make_unique<Menu>("Beverages");
    beverages->append(std::make_unique<MenuItem>("Coffe", 20));
    beverages->append(std::make_unique<MenuItem>("Tea", 15));

    auto dishes = std::make_unique<Menu>("Dishes");
    dishes->append(std::make_unique<MenuItem>("Olivie", 5.75));

    mainMenu->append(std::move(beverages));
    mainMenu->append(std::move(dishes));

    output(std::move(mainMenu));
}
