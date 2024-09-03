/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 12
// Problema planteado:. Escriba un programa para leer dos valores enteros distintos entre sí, de tal forma que,
si el primer número es mayor al segundo, realizar una función para genere una serie
descendente, caso contrario, realizar otra función para muestre una serie ascendente; el
factor de incremento o decremento es la unidad.

*/

#include <iostream>
using namespace std;

void seriaasode(int inicio, int fin) {
    if (inicio > fin) {
        for (int i = inicio; i >= fin; --i)
        {
            cout << i << " ";
        }
    } else 
    {
        for (int i = inicio; i <= fin; ++i) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int numero1, numero2;

    cout << "Ingrese el primer numero";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (numero1 != numero2) 
    {
        seriaasode(numero1, numero2);
    } else 
    {
        cout << "Los numeros deben ser distintos." << endl;
    }

    return 0;
}