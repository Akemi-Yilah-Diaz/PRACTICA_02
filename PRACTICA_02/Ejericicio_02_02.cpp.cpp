/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 2
// Problema planteado: Cálculo de la hipotenusa: Leer las longitudes de los dos catetos de un triángulo
rectángulo y realizar una función para calcular la hipotenusa usando el teorema de
Pitágoras
*/
#include <iostream>
#include <cmath>
using namespace std;

double calculohipotenusa(double cateto1, double cateto2) {
    return std::sqrt(std::pow(cateto1, 2) + std::pow(cateto2, 2));
}

int main() {
    double cateto1;
    double cateto2;
    
    cout << "Ingresa el primer cateto";
    cin >> cateto1;
    cout << "Ingresa el segundo cateto";
    cin >> cateto2;

    double hipotenusa = calculohipotenusa(cateto1, cateto2);

    std::cout << "La hipotenusa es: " << hipotenusa << std::endl;

    return 0;
}