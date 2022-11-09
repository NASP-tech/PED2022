#include <iostream>
#include <string.h>

#include "clases/empleado.h"

using namespace std;

int Menu();

int main()
{
    Empleado empleado1;

    string nombre;
    double salario;
    string modalidad;
    string genero;
    int nacimiento;

    double impuesto = 0;

    bool continueAction = true;

    do
    {
        switch(Menu())
        {
            case 1:
                cout << "Ingrese datos del empleado: " << endl;
                cout << "Ingrese el nombre: " << endl;
                cin >> nombre;
                empleado1.setName(nombre);

                cout << "Ingrese Salario: " << endl;
                cin >> salario;
                empleado1.setSalary(salario);

                cout << "Ingrese la modalidad (Planilla/Servicio Profesional): " << endl;
                cin >> modalidad;
                empleado1.setModality(modalidad);

                cout << "Ingrese el genero: " << endl;
                cin >> genero;
                empleado1.setGender(genero);

                cout << "Ingrese anio de nacimiento" << endl;
                cin >>nacimiento;
                empleado1.setBirthday(nacimiento);

                cout << "Empleado agregado" << endl;
                break;
                case 2:
                    empleado1.mostrar();
                    break;
                case 3:
                    impuesto = empleado1.CalcularDeducciones();
                    cout << "Deduccion Salarial: " << impuesto << endl;
                    cout << "Su salario neto es: " << empleado1.SalarioActual(impuesto) << endl;
                    break;
                case 4:
                    continueAction = false;
                    break;
        }
    }
    while(continueAction);

    cout << "Fin del Sistema" << endl;

    return 0;
}

int Menu()
{
    int opcion;
    cout << "Bienvenidos" << endl;
    cout << "1.Ingresar Usuario" << endl;
    cout << "2. Mostrar Empleado" << endl;
    cout << "3. Mostrar Descuentos" << endl;
    cout << "4. Salir" << endl;
    cin >> opcion;
    return opcion;
}