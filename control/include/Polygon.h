#ifndef POLYGON_H
#define POLYGON_H


class Polygon
{
private:
    int w, h;
    public:
        Polygon();
        Polygon(int, int);
        virtual ~Polygon();
        int area();
        void printArea();
};

#endif // POLYGON_H
