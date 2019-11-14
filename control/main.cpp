#include <iostream>
#include "Polygon.h"
#include "ArrayPolygon.h"

using namespace std;

int main()
{
    cout<<"tamanio del arreglo: ";
    int tam;
    cin>>tam;
    Polygon po[tam];
    cout<<"Area: ";
    for (int i=0; i<tam; i++)
    {
        cout<<"ingresar altura y anchura respectivamente: ";
        int h, w;
        cin>>h;
        cout<<", ";
        cin>>w;
        po[i]=Polygon(h,w);
        cout<<po[i].area()<<endl;
    }
    ArrayPolygon arreglo(po,tam);
    arreglo.printA();
    cout<<"agregar al final: ";
    cout<<"ingresar altura y anchura respectivamente: ";
    int h, w;
    cin>>h;
    cout<<", ";
    cin>>w;
    Polygon fin(h,w);
    arreglo.insertarFinal(fin);
    arreglo.printA();
    cout<<"agregar en una posicion: ";
    cout<<"ingresa su nueva posicion: ";
    int posi;
    cin>>posi;
    cout<<"ingresar altura y anchura respectivamente: ";
    cin>>h;
    cout<<", ";
    cin>>w;
    Polygon pos(h,w);
    arreglo.insertar(pos,posi);
    arreglo.printA();
    cout<<"eliminar el ultimo elemento:"<<endl;
    arreglo.eliminar();
    arreglo.printA();

    return 0;
}
