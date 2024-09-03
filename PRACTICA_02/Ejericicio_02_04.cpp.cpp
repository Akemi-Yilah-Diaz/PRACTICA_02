/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 4
// Problema planteado: CLeer tres números enteros y realizar una función para determinar si pueden formar un
triángulo rectángulo (aplicar el teorema de Pitágoras 
*/
#include <iostream>
#include <algorithm>
using namespace std;

bool esTrianguloRectangulo(int a, int b, int c) {
    int lados[] = {a, b, c};
    sort(lados, lados + 3);

    return (lados[2] * lados[2]) == (lados[0] * lados[0] + lados[1] * lados[1]);
}

int main()
{
    int a;
    int b; 
    int c;
    cout << "Ingrese tres números enteros: ";
    cin >> a >> b >> c;

    if (esTrianguloRectangulo(a, b, c))
    {
        std::cout << "Los numeros pueden formar un triangulo rectangulo" <<endl;
    } else
    {
        std::cout << "Los numeros no pueden formar un triangulo rectangulo." <<endl;
    }

    return 0;
}