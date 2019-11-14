#include "Polygon.h"
#include <iostream>

using namespace std;

Polygon::Polygon()
{
    w=0;
    h=0;
}

Polygon::Polygon(int a, int b)
:w(a), h(b){}

int Polygon::area()
{
    return w*h;
}

void Polygon::printArea()
{
    cout<<this->area()<<'\t';
}
