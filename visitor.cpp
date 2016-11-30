#include "visitor.h"

#include <iostream>

#include "menu.h"
#include "menuitem.h"


void Visitor::visit(Menu *item)
{
    std::cout << " ***" << item->title() << "***" << std::endl;

    for (int i = 0; i < item->count(); ++i)
    {
        item->at(i)->apply(this);
    }
}

void Visitor::visit(MenuItem *item)
{
    std::cout << item->title() << "   $" << item->price() << std::endl;
}
