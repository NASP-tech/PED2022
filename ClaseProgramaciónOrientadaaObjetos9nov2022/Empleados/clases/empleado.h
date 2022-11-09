#include<iostream>
#include<string.h>

using namespace std;

class Empleado
{
    private:
        string nombre;
        double salario;
        string modalidad;
        string genero;
        int nacimiento;

        double ISSS = 0.03;
        double AFP = 0.07;
        double renta = 0.1;

    public:
        Empleado();
        Empleado(string, double, string, string, int);

        string getNombre();
        void setName(string name);

        double getSalario();
        void setSalary(double salary);

        string getModalidad();
        void setModality(string modality);

        string getGender();
        void setGender(string gender);

        int getNacimiento();
        void setBirthday(int birthday);

        void mostrar();
        double CalcularDeducciones();
        double SalarioActual(double descuento);
};

Empleado::Empleado()
{

}

Empleado::Empleado(string _nombre, double _salario, string _modalidad, string _genero, int _nacimiento)
{
    setName(_nombre);
    setSalary(_salario);
    setModality(_modalidad);
    setGender(_genero);
    setBirthday(_nacimiento);
}

void Empleado::setName(string name)
{
    nombre = name;
}

string Empleado::getNombre()
{
    return nombre;
}

void Empleado::setSalary(double salary)
{
    salario = salary;
}

double Empleado::getSalario()
{
    return salario;
}

void Empleado::setModality(string modality)
{
    modalidad = modality;
}

string Empleado::getModalidad()
{
    return modalidad;
}

void Empleado::setGender(string gender)
{
    genero = gender;
}

string Empleado::getGender()
{
    return genero;
}

void Empleado::setBirthday(int birthday)
{
    nacimiento = birthday;
}

int Empleado::getNacimiento()
{
    return nacimiento;
}

void Empleado::mostrar()
{
    cout << "---Empleados---" << endl ;
    cout << "Nombre: " << nombre << endl;
    cout << "Salario: " << salario << endl;
    cout << "Modalidad: " << modalidad << endl;
    cout << "Genero: " << genero << endl;
    cout << "Nacimiento: " << nacimiento << endl;
}


double Empleado::CalcularDeducciones()
{
    double deducciones = 0;
    if(modalidad == "Servicio Profecional")
    {
        deducciones = salario * renta;
    }
    else if(modalidad == "Planilla")
    {
        deducciones = (salario * renta) + (salario * ISSS) + (salario * AFP);
    }
    return deducciones;
}

double Empleado::SalarioActual(double descuento)
{
    double actual = 0;
    actual = salario - descuento;
    return actual;
}