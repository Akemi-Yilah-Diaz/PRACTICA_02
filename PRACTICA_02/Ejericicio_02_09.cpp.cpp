/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 9
// Problema planteado:  Leer un número de cuatro dígitos y realizar una función para determinar si al menos
dos de los dígitos son iguales.
*/

#include <iostream>
using namespace std;

bool estafibonacci(int num)
{
    int a = 0, b = 1;
    if (num == a || num == b) return true; 
    
    while (b < num) {
        int siguiente = a + b;
        a = b;
        b = siguiente;
    }
    
    return (b == num);
}

int main() 
{
    int num;
    cout << "Ingrese un número para ver si esta en la secuencia ";
    cin >> num;

    if (num < 0) {
        cout << "Número no válido." << endl;
    } else if (estafibonacci(num)) 
    {
        cout << num << " si esta en la secuencia de Fibonacci." << endl;
    } else {
        cout << num << " no esta en la secuencia de Fibonacci" << endl;
    }

    return 0;
}