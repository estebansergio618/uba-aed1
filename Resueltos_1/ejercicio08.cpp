// La conjetura de Collatz
// Forma Iterativa.

#include <iostream>

using namespace std;

void collatz(int n, int& cantPasos) {
    // Centinela (n != 1)
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            cout << n << " ";
            cantPasos++;
        }
        else
        {
            n = 3 * n + 1;
            cout << n << " ";
            cantPasos++;
        }
    }
    cout << "\nCantidad de Pasos: " << cantPasos;
}

int main()
{
    // Contador
    int cantPasos = 1;
    int n;

    cout << "Ingrese un número para mostrar la sucesión de Collatz y contar cuantos pasos hace:\n";
    cin >> n;

    cout << "Sucesión de Collatz: " << n << " ";

    collatz(n, cantPasos);

    return 0;
}
