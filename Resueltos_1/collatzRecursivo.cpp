// La conjetura de Collatz
// Forma Recursiva.
#include <iostream>

using namespace std;

int collatz(int n, int& cantPasos) {
    int res;
    if (n == 1)
    {
        cout << "y la cantidad de pasos es " << cantPasos;
    }
    else if (n % 2 == 0)
    {
        res = n / 2;
        cout << res << " ";
        cantPasos++;
        collatz(res, cantPasos);
    }
    else
    {
        res = 3 * n + 1;
        cout << res << " ";
        cantPasos++;
        collatz(res, cantPasos);
    }
}

int main()
{
    // Contador
    int cantPasos = 1;
    int n;

    cout << "Ingrese un número para mostrar la sucesión de Collatz y contar cuantos pasos hace:\n";
    cin >> n;

    cout << "La sucesión de Collatz es " << n << " ";

    collatz(n, cantPasos);

    return 0;
}
