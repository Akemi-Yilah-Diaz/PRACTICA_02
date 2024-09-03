/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 5
// Problema planteado: Leer un año y un mes (como número) y realizar una función para determinar cuántos
días tiene ese mes considerando si el año es bisiesto.
*/
#include <iostream>
using namespace std;

bool bisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);//esucacion anio//
}

int diasmes(int anio, int mes) {
    if (mes == 2) {
        return bisiesto(anio) ? 29 : 28; 
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30; // Meses con 30 días
    } else {
        return 31; // Meses con 31 días
    }
}

int main() 
{
    int anio;
    int mes;

    cout << "Ingrese el año";
    cin >> anio;
    cout << "Ingrese el mes del 1-12";
    cin >> mes;

    if (mes < 1 || mes > 12) {
        cout << "ingresa otro mes" << endl;
    } else {
        int dias = diasmes(anio, mes);
        cout << "El mes " << mes << " del año " << anio << " tiene " << dias << " días" << endl;
    }

    return 0;
}
