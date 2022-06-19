// Pasaje por valor y referencia.

#include <iostream>

using namespace std;

void analizarCirculo(float &diametro, float &circunferencia, float &area, float radio) {
    diametro = 2 * radio;
    circunferencia = 2 * 3.14159 * radio;
    area = 3.14159 * radio * radio;
}

int main()
{
    float diametro = 0;
    float circunferencia = 0;
    float area = 0;
    float radio = 0;

    cout << "Ingrese un radio: ";
    cin >> radio;

    analizarCirculo(diametro, circunferencia, area, radio);

    cout << " Diametro: " << diametro << "\n";
    cout << " Circunferencia: " << circunferencia << "\n";
    cout << " Area: " << area << "\n";

    return 0;
}
