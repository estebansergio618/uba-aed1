// Modificar el programa anterior para que el número de estudiantes sea
// arbitrario.Por ejemplo : Ingrese la nota(-1 para terminar):

#include <iostream>

using namespace std;

int main() {

    float suma = 0;
    float nota = 0;
    float promedio = 0;
    float cantidadDeAlumnos = 1;

    // Repetición controlada por un centinela.
    float centinela = 0;

    while (centinela != -1) {

        cout << "Ingrese nota " << cantidadDeAlumnos << ": \n";
        cin >> nota;

        suma = suma + nota;
        promedio = suma / cantidadDeAlumnos;
        cantidadDeAlumnos++;

        cout << "“Ingrese -1 para terminar, cualquier otro valor para continuar \n";
        cin >> centinela;

    }

    cout << "La suma total es: " << suma;
    cout << " y el promedio de la clase es: " << promedio;
    return 0;
}
