#include <iostream>
#include <vector>

using namespace std;

// (ParaTodo i :Z)(1 <= i < |v| CTHEN v[i] >= v[i-1] OR v[i] <= v[i-1])

bool esCreciente(vector<int> &v){
    bool res;
    
    for (int i = 1; i < v.size(); i++) {
        if (v[i] >= v[i-1]){
          res = true;  
        } else {
          res = false;
          i = v.size();
        }
    }
    
    return res;
}

bool esDecreciente(vector<int> &v){
    bool res;
    
    for (int i = 1; i < v.size(); i++) {
        if (v[i] <= v[i-1]){
          res = true;  
        } else {
          res = false;
          i = v.size();
        }
    }
    
    return res;
}

bool estaOrdenado(vector<int> v){
    bool res;
    
    if (esCreciente(v) || esDecreciente(v)){
        res = true;
    } else {
        res = false;
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

    // Evaluo si el vector v esta ordenado
    bool res = estaOrdenado(v);

    // Imprimo la salida
    cout << (res?"True":"False");

    return 0;
}

