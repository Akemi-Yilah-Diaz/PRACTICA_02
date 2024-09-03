/* // Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 03/09/2024
// Número de ejercicio: 15
// Problema planteado: Escribir un programa generar un número aleatorio no mayor a dos dígitos y realizar
una función para muestre el número en literal. Ejemplo: 34 Treinta y cuatro
*/

#include <iostream>
#include <cstdlib>  // Para random
#include <ctime>    // Para time()

using namespace std;

string numliteral(int numero) {
    const string unidades[] = { "cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve" };
    const string decenas[] = { "", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa" };
    
    if (numero < 10) return unidades[numero];
    if (numero < 20)
    {
        switch (numero)
        {
            case 10: return "diez";
            case 11: return "once";
            case 12: return "doce";
            case 13: return "trece";
            case 14: return "catorce";
            case 15: return "quince";
            default: return "dieci" + unidades[numero - 10];
        }
    }
    return decenas[numero / 10] + (numero % 10 ? " y " + unidades[numero % 10] : "");
}

int main() {
    srand(time(0));  
    int numero = rand() % 99 + 1;  

    cout << "Número generado: " << numero << endl;
    cout << "En literal: " << numliteral(numero) << endl;

    return 0;
}

