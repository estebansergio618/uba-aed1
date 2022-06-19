// Pasaje por valor y referencia

#include <iostream>

using namespace std;

//void triplicarPorReferencia(int &cuenta){
//   cuenta = 3*cuenta;
//}

int triplicarPorValor(int n) {
    n = 3 * n;
    return n;
}

int main()
{
    int cuenta;

    cout << "Ingrese una variable para ser triplicada: ";
    cin >> cuenta;

    cuenta = triplicarPorValor(cuenta);
    // triplicarPorReferencia(cuenta);
    cout << "El valor triplicado (por copia) es:" << cuenta;
    //cout << "El valor triplicado (por refe.) es:" << cuenta;

    return 0;
}
