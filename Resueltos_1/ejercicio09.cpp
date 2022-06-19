// Versión iterativa.
// La versión recursiva la vimos en Haskell en Algebra 1.

#include <iostream>
#include <vector>

using namespace std;


vector<int> division (int dividendo, int divisor){
    int cociente = dividendo/divisor;
    vector<int> CocienteYResto;
    
    for (int resto = 0; resto < divisor; resto++) {
        if (dividendo == divisor*cociente + resto){
           CocienteYResto = {cociente, resto};
        }
    }
    return CocienteYResto;
}

void mostrarVector(const vector<int>& v){
    std :: cout << "[";
    for (int i = 0; i < v.size(); i++){
        if (i == v.size() - 1){
            cout << v[i] << "]" << endl;
        } else{
            cout << v[i] << ", ";
        }
    }
}

int main()
{
    mostrarVector(division(110,39));
    return 0;
}
