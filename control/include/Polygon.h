#ifndef POLYGON_H
#define POLYGON_H


class Polygon
{
private:
    int w, h;
    public:
        Polygon();
        Polygon(int, int);
        int area( void);
        void printArea();
};

#endif // POLYGON_H
