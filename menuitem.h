#ifndef MENUITEM_H
#define MENUITEM_H

#include "abstractmenuitem.h"

/*!
 * \brief The MenuItem class implemens single menu entry.
 */
class MenuItem : public AbstractMenuItem
{
public:
    MenuItem(const std::string &title);
};

#endif // MENUITEM_H
