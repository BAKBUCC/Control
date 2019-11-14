#include "ArrayPolygon.h"
#include <iostream>

using namespace std;
void ArrayPolygon::redimensionar()
{
    cout<<"nuevo tamanio: ";
    int guardar_size=sizes;
    cin>>sizes;
    if(sizes>guardar_size)
    {
        sizes-=guardar_size;
        while (sizes--)
        {
            cout<<"ingresar altura y anchura respectivamente: ";
            int h, w;
            cin>>h>>w;
            Polygon a(h,w);
            ArrayPolygon::insertarFinal(a);
        }
    }
    else
    {
        guardar_size-=sizes;
        while(guardar_size--)
        {
            eliminar();
        }
    }
}

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
    for (int i=0; i<pos-1; i++)
    {
        tmp[i]=arr[i];
    }
    tmp[pos-1]=a;
    for (int j=pos; j<sizes-1; j++)
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
void ArrayPolygon::printA()
{
    cout<<"areas: ";
    cout<<"{ ";
    int i;
    for (i=0; i<sizes; i++)
    {
        arr->printArea();
        if (i<sizes-1)
        {
            cout<<", ";
        }
        arr++;
    }
    cout<<"}"<<endl;
    arr-=i;
}



