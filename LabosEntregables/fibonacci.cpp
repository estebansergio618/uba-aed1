#include <iostream>

using namespace std;

// Funcion de fibonacci que calcula n-esimo termino
int fibonacci(int n){
    int f_nMenosUno = 0;
    int f_nMenosDos = 1;
    int fn = 1;
    int i = 2;
    
    if (n == 0) {
        fn = 0;
    } else if (n == 1) {
        fn = 1;
    } else {
        while (i < n + 1) {
            f_nMenosDos = f_nMenosUno;
            f_nMenosUno = fn;
            fn = f_nMenosUno + f_nMenosDos;
            i = i + 1;
        }
    }
    
    return fn;
}

int main() 
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;    
    return 0;
}
