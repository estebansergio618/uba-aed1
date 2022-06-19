// Escribir una función que dados n, k ∈ N compute el combinatorio. Usar la identidad de pascal.
#include <iostream>

using namespace std;

int factorial(int n) {
    int res = 1, i = 1;
    while (1 <= i && i <= n) {
        res = i * res;
        i++;
    }
    return res;
}

int pascal (int n, int k) {
    int res;
    if (n == k || k == 0) {
        res = 1;
    }
    else {
        res = pascal(n - 1, k) + pascal (n - 1, k - 1);
    }
    return res;
}

int binomial(int n, int k) {
// Estoy esperando una respuesta del ayudante.
// 
// RPTA: Para escribir la forma iterativa de este problema no tenés las herramientas necesarias. 
// Este ejercicio tiene la finalidad de que puedan ver que hay problemas que son más sencillos de resolver con algoritmos iterativos,
// pero que hay otros que recursivamente se resuelven muy sencillo y de forma iterativa no.
}


int main()
{
    int n, k;
    cout << "el combinatorio de ";
    cin >> n;
    cout << "en ";
    cin >> k;
 // cout << "es " << binomial(n,k);
    cout << "es " << pascal (n, k);
    return 0;
}
