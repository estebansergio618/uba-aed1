
#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int mantieneElValorDeA = a;
    a = b;
    b = mantieneElValorDeA;
}

int main()
{
    int a;
    int b;

    cout << "Ingrese A: \n";
    cin >> a;
    cout << "Ingrese B: \n";
    cin >> b;

    swap(a, b);

    cout << "Ahora A es: " << a << ", y B es: " << b;

    return 0;
}
