#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    // Entrada de datos
    cout << "Escribe el primer numero: ";
    cin >> num1;

    cout << "Escribe el segundo numero: ";
    cin >> num2;

    // Operaciones
    float suma = num1 + num2;
    float resta = num1 - num2;
    float multiplicacion = num1 * num2;
    float division = num1 / num2;

    // Salida de resultados
    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multiplicacion << endl;
    cout << "La division es: " << division << endl;

    return 0;
}