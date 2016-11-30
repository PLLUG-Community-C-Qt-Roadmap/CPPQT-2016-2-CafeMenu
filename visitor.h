#ifndef VISITOR_H
#define VISITOR_H

class Menu;
class MenuItem;

class Visitor
{
public:
    void visit(Menu *item);
    void visit(MenuItem *item);
};

#endif // VISITOR_H
