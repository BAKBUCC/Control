#ifndef ARRAYPOLYGON_H
#define ARRAYPOLYGON_H
#include "Polygon.h"


class ArrayPolygon
{
    private:
        Polygon *arr;
        int sizes;
        void redimensionar();
    public:
        ArrayPolygon();
        ArrayPolygon(Polygon a[], int s);
        ArrayPolygon(ArrayPolygon &a);
        ~ArrayPolygon();
        void insertarFinal(Polygon a);
        void insertar (Polygon a, int pas);
        void eliminar();
        void printA();

    protected:

    private:
};

#endif // ARRAYPOLYGON_H
