#include <iostream>

using namespace std;

//Escribir la función sumaDivisores que dado n ∈ N, devuelve la suma de todos sus divisores entre[1, n].
//Forma iterativa.

int sumaDivisores(int n) {
    int res = 0,d=1;
    while (1 <= d && d <= n) {
        if (n%d==0)
        {
            res = d + res;
            d++;
        }
        else
        {
            d++;
        }
    }
    return res;
}

int main()
{
    int n;
    cout << "La suma de divisores de ";
    cin >> n;
    cout << "es:" << sumaDivisores(n);
    return 0;
}
