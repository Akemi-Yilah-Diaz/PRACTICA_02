/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 7
// Problema planteado: Realizar una función para imprimir la tabla de multiplicar de un número dado.
*/
#include <iostream>
using namespace std;

void tabla(int numero) 
{
    for (int i = 1; i <= 10; ++i) 
    {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}

int main() {
    int numero;

    cout << "Ingrese un numero";
    cin >> numero;

    //imprime la tabla de multio[plicar del numero igresado]
    tabla(numero);

    return 0;
}