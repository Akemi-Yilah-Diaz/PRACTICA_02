/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 13
// Problema planteado:. Realizar una función para generar una secuencia de números aleatorios entre 1 y 100,
desplegar en pantalla todos los números generados y si el número es divisible entre 5, al
lado del número debe imprimir un asterisco (*).
*/

#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

void secuencia(int cantidad)
{
    for (int i = 0; i < cantidad; ++i) 
    {
        int numero = rand() % 100 + 1;  
        cout << numero;
        
        if (numero % 5 == 0)
        {
            cout << "*";  
        }
        
        cout << " ";
    }
    cout << endl;
}

int main() {
    int cantidad;

    // numeros aleatorios//
    srand(static_cast<unsigned int>(time(0)));

    cout << "Ingrese la cantidad de números aleatorios";
    cin >> cantidad;

    if (cantidad > 0)
    {
        secuencia(cantidad);
    } else {
        cout << "La cantidad debe ser un número" << endl;
    }

    return 0;
}