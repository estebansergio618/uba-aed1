#include <iostream>

using namespace std;

//Escribir la función que dado n>0 devuelve la suma de todos los números impares menores que n.

//Forma iterativa.

int sumaDeImparesMenoresQue(int n) {
	int res = 0, i = 1;

	while (1<=i && i <= n) {
		if (i%2==1)
		{
				res = i + res;
				i++;
		}
		else
		{
				i++;
		}
	}
	return res;
}


int main() {
	int n;
	cout << "sumar impares menores que:" << endl;
	cin >> n;
	cout << sumaDeImparesMenoresQue(n);
	return 0;
}