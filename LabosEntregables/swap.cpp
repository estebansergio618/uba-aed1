#include <iostream>

using namespace std;

void swap(int& a, int& b){
    int guardaValor = a;
    a = b;
    b = guardaValor;
}

int main() {
    /* No hace falta modificar el main */
    int a,b;
    //Leo a
    cin >> a >> b;
    
    swap(a,b);
    
    //Devuelvo despues del swap
    cout << a << " " << b;
    return 0;
}
