#include <vector>
#include <iostream>

using namespace std;

void ordenar1(vector<int>& v){
    // {I: 0<= i <= j <= n cand ordenado(b[0:i-1]) and b[j] >= b[i-1] }
    // {Fv: n - i}
    int i = 0;
    int j = 0;
    int n = v.size();

    while(i != n){
        j = i + 1;
        while(j!=n) {
            if (v[i] <= v[j]) {
                // SKIP
            } else if (v[i] >= v[j]) {
                //SWAP
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main() {
    /* No hace falta modificar el main */
    
    // Leo las entradas
    int n; //Longitud del vector
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }

    // Hago el ordenamiento
    ordenar1(v);
    
    // Imprimo el vector resultado
    i = 0;
    while (i < v.size()){
        cout << v[i] << " ";
        i++;
    }
    
    return 0;
}
