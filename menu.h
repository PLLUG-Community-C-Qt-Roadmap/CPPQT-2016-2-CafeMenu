#ifndef MENU_H
#define MENU_H

#include "abstractmenuitem.h"

/*!
 * \brief The Menu class implements menus and submenus that contains list of menu items.
 */
class Menu : public AbstractMenuItem
{
public:
    Menu(const std::string &title);
};

#endif // MENU_H
