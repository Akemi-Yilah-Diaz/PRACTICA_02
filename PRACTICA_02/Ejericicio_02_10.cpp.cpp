/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 10
// Problema planteado: Leer un número de cuatro dígitos y realizar una función para determinar si al menos
dos de los dígitos son iguales.
*/

#include <iostream>
using namespace std;

bool dosiguales(int numero
{
    int digito1 = numero / 1000;       
    int digito2 = (numero / 100) % 10; 
    int digito3 = (numero / 10) % 10;   
    int digito4 = numero % 10;         
    return (digito1 == digito2 || digito1 == digito3 || digito1 == digito4 ||
            digito2 == digito3 || digito2 == digito4 ||
            digito3 == digito4);
}

int main() {
    int numero;

    cout << "Ingrese un numero de cuatro digitos";
    cin >> numero;

    if (numero >= 1000 && numero <= 9999)//para que sean 4 digitos//
    {
        if (dosiguales(numero)) {
            cout << "el numero si tiene 2 digitos iguales" << endl;
        } else {
            cout << "el numero no tiene 2 digitos iguales" << endl;
        }
    } else {
        cout << "ingresa otro numero" << endl;
    }

    return 0;
}