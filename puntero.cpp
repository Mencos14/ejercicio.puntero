#include <iostream>
using namespace std;
int main(int argc,char *argv[])
{
    int edad;
    int *puntero = &edad;
    cout << "ingrese la edad ";
    cin >> *puntero;
    

    if(*puntero >=18)
    {
        cout << " usted es mayor de edad " << *puntero<< "\n";
    }
    else if(*puntero <0)
    {
       cout << " La edad ingresada es invalida";
    }
    else
    {
        cout << " usted es menor de edad " << *puntero << "\n";
    }

    cout << "La edad ingresada es " << edad << "\n";
    cout << "el espacio de memoria de la variable es: " << puntero << "\n";

    delete[] puntero;
    puntero = NULL;

    return 0;

}