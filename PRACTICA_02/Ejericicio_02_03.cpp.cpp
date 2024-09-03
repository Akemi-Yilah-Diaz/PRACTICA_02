/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 3
// Problema planteado: Cálculo de la distancia entre dos puntos: Leer las coordenadas de dos puntos en el
plano cartesiano y realizar una función para calcular la distancia entre ellos usando la
fórmula.
*/
#include <iostream>
#include <cmath>
using namespace std;

struct Punto 
{
    double x;
    double y;
};

double calcularDistancia(const Punto& p1, const Punto& p2)
{
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));//ecuacion//
}

int main()
{
    Punto punto1, punto2;


    cout << "Ingresa las coordenadas del primer punto ";
    cin >> punto1.x >> punto1.y;

    cout << "Ingresa las coordenadas del segundo punto";
    cin >> punto2.x >> punto2.y;

    double distancia = calcularDistancia(punto1, punto2); // funcion ya antes dada//

    std::cout << "La distancia entre los dos puntos es " << distancia << std::endl;

    return 0;
}