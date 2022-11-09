#include <iostream>
#include <string.h>

using namespace std;

class Celulares
{
    private:
        int codigo;
        string marca;
        string modelo;
        double precio;
        int stock;

    public:
        Celulares();
        Celulares(int, string, string, double, int);

        int getStock();
        void setStock(int num);

        string getMarca();
        void setMarca(string brand);

        string getModelo();
        void setModelo(string model);

        double getPrecio();
        void setPrecio(double price);

        int getCodigo();
        void setCodigo(int code);

        void mostrar();
};

Celulares::Celulares(){}

Celulares::Celulares(int _codigo, string _marca, string _modelo, double _precio, int _stock)
{
    codigo = _codigo;
    setMarca(_marca);
    setModelo(_modelo);
    setPrecio(_precio);
    setStock(_stock);
};

void Celulares::setCodigo(int code)
{
    codigo = code;
}
int Celulares::getCodigo()
{
    return codigo;
}

void Celulares::setMarca(string brand)
{
    marca = brand;
}
string Celulares::getMarca()
{
    return marca;
}

void Celulares::setModelo(string model)
{
    modelo = model;
}

string Celulares::getModelo()
{
    return modelo;
}

void Celulares::setPrecio(double number)
{
    precio = number;
}

double Celulares::getPrecio()
{
    return precio;
}

void Celulares::setStock(int num)
{
    stock = num;
}

int Celulares::getStock()
{
    return stock;
}

void Celulares::mostrar()
{
    cout <<"****Producto****" << endl;
    cout << "Codigo: " << codigo << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Precio: " << precio << endl;
    cout << "Stock: " << stock << endl;
}