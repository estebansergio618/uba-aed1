#include <iostream>

using namespace std;

// Funcion de fibonacci que calcula n-esimo termino
int fibonacci(int n) {
    int res;
    int i=1,fib0=0,fib1=1;
    if (n==0)
    {
        res = fib0;
    }
    else if (n==1)
    {
        res = fib1;
    }
    else {
        while (1 <=  i && i < n)
        {
            res = fib0 + fib1;
            fib0 = fib1;
            fib1 = res;

            i++;
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
