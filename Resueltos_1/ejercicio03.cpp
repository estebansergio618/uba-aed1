// Repetición controlada por un centinela y uso de contadores.
#include <iostream>

using namespace std;

int main() {

    float suma = 0;
    float nota = 0;
    float promedio = 0;
    float cantidadDeAlumnos = 1;
    float aprobado = 0;
    float desaprobado = 0;
    
    float contador = 0;
    float centinela = 0;

    // Repetición controlada por un centinela.
    while (centinela != -1) {

        cout << "Ingrese nota " << cantidadDeAlumnos << ": \n";
        cin >> nota;
        // Contador:
        if (nota > 6)
        {
            aprobado++;
        }
        else
        {
            desaprobado++;
        }
        // Fin del contador 
        suma = suma + nota;
        promedio = suma / cantidadDeAlumnos;

        cout << "“Ingrese -1 para terminar, cualquier otro valor para continuar \n";
        cin >> centinela;

        cantidadDeAlumnos++;
    }

    if (cantidadDeAlumnos < 6 || cantidadDeAlumnos*2/3 == aprobado)
    {
        cout << "La cantidad de alumnos total no puede ser menor a 6 \n";
        return 1;
    }
    else
    {
        cout << "Se puede incrementar el número de plazas en el curso. \n";
    }

    cout << "Tengo " << desaprobado << " desaprobados y " << aprobado << " aprobados \n";
    cout << "La suma total es: " << suma;
    cout << " y el promedio de la clase es: " << promedio;
    return 0;
}
