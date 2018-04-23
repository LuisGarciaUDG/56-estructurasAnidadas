/*
Programa_56

Uso de estructuras o registros

Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 9 de mayo de 2015
*/

#include <iostream>
#include <windows.h>

using namespace std;

struct boleta
{
char fecha [35];
float calificacion;

    struct alumno
    {
        char nombre [35], carrera [25];
    }alu;

    struct profesor
    {
        char nombre [35];
    }pro;

    struct materia
    {
        char nombre [30];
        int creditos;
    }mat;

}bol;

void capturar()
{
    cout<<"\n\tUniversidad de Guadalajara\n";
    cout<<"\n\tDame la fecha:                      ";
    cin>>bol.fecha;
    cout<<"\n\tDame el nombre del alumno:          ";
    cin>>bol.alu.nombre;
    cout<<"\n\tDame la carrera del alumno:         ";
    cin>>bol.alu.carrera;
    cout<<"\n\tDame el nombre del profesor:        ";
    cin>>bol.pro.nombre;
    cout<<"\n\tDame la materia:                    ";
    cin>>bol.mat.nombre;
    cout<<"\n\tCuantos creditos tiene el alumno:   ";
    cin>>bol.mat.creditos;
    cout<<"\n\tCual es la calificacion del alumno: ";
    cin>>bol.calificacion;
    cout<<"\n\n\tCalificacion capturada... \n\n\t\tImprimiendo boleta...\n\n\t\t\t";
    Sleep(2000);
    system ("pause");
}

int main()
{
    capturar();
    return 0;
}

