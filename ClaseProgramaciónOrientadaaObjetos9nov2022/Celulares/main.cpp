#include <iostream>
#include <string.h>
#include "clases/clase.h"

using namespace std;

void agregarCelulares()
{
    int n;
    int codigo;
    string marca;
    string modelo;
    double precio;
    int stock;

    cout << "Ingrese la cantidad de objetos: " << endl;
    cin >> n;

    Celulares *listaCelulares[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el codigo: " << endl;
        cin >> codigo;

        cout << "Ingrese marca: " << endl;
        cin >> marca;

        cout << "Ingrese modelo: " << endl;
        cin >> modelo;

        cout << "Ingrese precio: " <<endl;
        cin >> precio;

        cout << "Ingrese stock: " << endl;
        cin >> stock;

        listaCelulares[i] = new Celulares(codigo, marca, modelo, precio, stock);
        cout << "Porducto agregado! :D" << endl;
    }

    for(int i = 0; i<n; i++)
    {
        listaCelulares[i]->mostrar();
    }
}

int main()
{
    Celulares objCelulares;
    objCelulares.setMarca("Samsung");
    objCelulares.setModelo("Note");
    objCelulares.setPrecio(1239.22);
    objCelulares.mostrar();

    agregarCelulares();
    return 0;
}