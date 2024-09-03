/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 14
// Problema planteado:. Realizar una función para generar los cuadrados perfectos en el rango 1 a n.
*/
#include <iostream>
using namespace std;

void cuadradosperfectos(int n)
{
    for (int i = 1; i * i <= n; ++i) 
    {
        cout << i * i << " ";  // Imprime el cuadrado perfecto
    }
    cout << endl;
}

int main()
{
    int n;

    cout << "Ingrese el valor de n";
    cin >> n;

    if (n >= 1) {
        cuadradosperfectos(n);
    } else 
    {
        cout << "El valor de n debe ser mayor o igual a 1" << endl;
    }

    return 0;
}