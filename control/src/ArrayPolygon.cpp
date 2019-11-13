#include "ArrayPolygon.h"
#include <iostream>

using namespace std;

ArrayPolygon::ArrayPolygon()
{
    this->sizes=0;
    this->arr=new Polygon[sizes];
}

ArrayPolygon::ArrayPolygon(Polygon a[], int s)
{
    this->sizes=s;      //size=s; error , es sugerible utilizar el this
    this->arr= new Polygon[sizes];      //arr=a; error
    for (int i=0; i<sizes; i++)
    {
        this->arr[i]=a[i];
    }
}

ArrayPolygon::~ArrayPolygon()
{
    delete []arr;
}

void ArrayPolygon::insertarFinal(Polygon a)
{
    //se creara otra lista, se copiaran todos los elementos y al final agregaremos
    //Elimino el anterior la lista arr y señalo el puntero arr a la nuec¿va lista
    sizes++;
    Polygon *tmp = new Polygon[sizes];
    for(int i=0; i<sizes-1; i++)
    {
        tmp[i]=arr[i];
    }
    tmp[sizes-1]=a;
    //si haces
    //arr=tmp;
    //delete[] arr
    //primero apunta al nuevo arreglo y lo borra, osea todo para nada
    delete[] arr;
    arr=tmp;
}

void ArrayPolygon::insertar(Polygon a, int pos)
{
    sizes++;
    Polygon *tmp = new Polygon[sizes];
    int i;
    for (i=0; i<pos; i++)
    {
        tmp[i]=arr[i];
    }
    tmp[pos]=a;
    for (int j=pos+1; j<sizes-1; j++)
    {
        tmp[j]=arr[j-1];
    }
    delete[] arr;
    arr=tmp;
}

void ArrayPolygon::eliminar()
{
    --sizes;
    Polygon *tmp = new Polygon[sizes];
    for (int i=0;i<sizes; i++)
    {
        tmp[i]=arr[i];
    }
    delete [] arr;
    arr=tmp;
}




