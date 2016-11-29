#ifndef MENUITEM_H
#define MENUITEM_H

#include "abstractmenuitem.h"

/*!
 * \brief The MenuItem class implemens single menu entry.
 */
class MenuItem : public AbstractMenuItem
{
public:
    MenuItem(const std::string &title,
        double price);

    double price() const;
    void setPrice(double price);

private:
    double mPrice;
};

#endif // MENUITEM_H
