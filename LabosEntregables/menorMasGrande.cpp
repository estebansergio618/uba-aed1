#include <vector>
#include <iostream>

using namespace std;

int menorMasGrande(vector<int> v,int x){
    int res;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > x){
            res = i;
            i = v.size();
        }else{
            res = -1;   
        }
    }
    
    return res;
}

int main() {
    /* No hace falta modificar el main */
    // Leo las entradas
    int n;
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }
    cin >> x;
    
    // Evaluo si el vector v esta ordenado
    int res = menorMasGrande(v,x);
    
    // Imprimo la salida
    cout << res;
    
    return 0;
}
