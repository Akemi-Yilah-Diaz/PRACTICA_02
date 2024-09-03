/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 8
// Problema planteado: Realizar una función para imprimir los primeros N números de la secuencia de
Fibonacci.
*/

#include <iostream>
using namespace std;

void fibonacci(int N) 
{
    int a = 0, b = 1; //bucle fibonacci
    for (int i = 0; i < N; ++i) {
        cout << a << " ";
        int siguiente = a + b;
        a = b;
        b = siguiente;
    }
    cout << endl;
}

int main() 
{
    int N;
    cout << "Ingrese el número de términos: ";
    cin >> N;
    if (N > 0) fibonacci(N);
    else cout << "Número no válido." << endl;
    return 0;
}