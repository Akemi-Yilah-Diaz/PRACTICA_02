/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 6
// Problema planteado: Leer una hora (en formato de 24 horas) y realizar una función para determinar si
corresponde a la mañana, tarde, noche o madrugada.
*/
#include <iostream>
using namespace std;

string determinarhora (int hora) 
{
    if (hora >= 0 && hora < 6) 
    {
        return "Madrugada";
    } if (hora >= 6 && hora < 12) {
        return "Mañana";
    } if (hora >= 12 && hora < 18) 
    {
        return "Tarde";
    }  if (hora >= 18 && hora < 24)
    {
        return "Noche";
    } else {
        return "Ingresa otra hora";
    }
}

int main()
{
    int hora;

    cout << "Ingrese la hora de 0-23";
    cin >> hora;

    string periodo = determinarhora(hora);
    cout << "La hora ingresada corresponde a la" << periodo << endl;

    return 0;
}