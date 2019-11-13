#ifndef ARRAYPOLYGON_H
#define ARRAYPOLYGON_H
#include "Polygon.h"


class ArrayPolygon
{
    private:
        Polygon *arr;
        int sizes;
    public:
        ArrayPolygon();
        ArrayPolygon(Polygon a[], int s);
        ArrayPolygon(ArrayPolygon &a);
        ~ArrayPolygon();
        void insertarFinal(Polygon a);
        void insertar (Polygon a, int pas);
        void eliminar();

    protected:

    private:
};

#endif // ARRAYPOLYGON_H
