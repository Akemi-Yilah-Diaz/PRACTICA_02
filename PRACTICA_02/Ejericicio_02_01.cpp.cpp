/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 1
// Problema planteado: Leer una cantidad de segundos y realizar una función para
convertirla a horas, minutos y segundos.
*/

#include <iostream>
using namespace std;

void convertirSegundos(int segundostotales, int &horas, int &minutos, int &segundos) 
{
    horas = segundostotales / 3600;  // 1 hora  tiene 3600 segundos
    minutos = (segundostotales % 3600) / 60;  // 1 minuto tiene 60 segundos
    segundos = segundostotales % 60;
}

int main() 

{
    int segundostotales;
    int horas, minutos, segundos;

    cout << "Ingresa los segundos";
    cin >> segundostotales;

    convertirSegundos(segundostotales, horas, minutos, segundos);

    cout << horas << " horas " << minutos << " minutos " << segundos << " segundos" << endl;

    return 0;
}
