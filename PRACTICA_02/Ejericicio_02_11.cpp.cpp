/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 11
// Problema planteado: Realizar una función para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49... para n
términos.

*/

#include <iostream>
using namespace std;

void secuencia(int N) {
    if (N <= 0) {
        cout << "Número no válido." << endl;
        return;
    }

    int term = 1;  
    cout << term << " ";

    for (int i = 1; i < N; ++i) 
    {// genera la secuencia
        if (i < 5)
        {
            term *= 2;
        } else {
            if (i == 5) term += 7;  
            else if (i == 6) term += 5;  
            else term += 10;      
        }
        cout << term << " ";
    }
    cout << endl;
}

int main() 
{
    int numero;
    cout << "Ingrese el número de términos: ";
    cin >> numero;

    secuencia(numero);

    return 0;
}