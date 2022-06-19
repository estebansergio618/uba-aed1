#include <iostream>

using namespace std;

// Repetición controlada por un contador

int main() {

    float suma = 0;
    float nota = 0;
    float promedio = 0;

    // contador del ciclo
    int contador = 1;

    while (contador <= 10) {

        cout << "Ingresar nota " << contador << " :";
        cin >> nota;

        suma = suma + nota;
        promedio = suma / contador;

        contador++;
    }

    cout << "La suma total es: " << suma;
    cout << " y el promedio de la clase es: " << promedio;
    return 0;
}

