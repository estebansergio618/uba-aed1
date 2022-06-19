#include <iostream>
#include <vector>

using namespace std;

vector<int> rotar(vector<int> v, int k){
	vector<int> res;
	int i = 0;
	while (i < v.size()){
		res.push_back(v[(k+1)%v.size()]);
		i= i + 1;
	}
	return res;   
}

int main() {
    /* No hace falta modificar el main */
    // Leo las entradas
    int n; //Longitud del vector a rotar
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }
    
    int k; // La cantidad que tengo que rotar la guardo en k
    cin >> k;
    
    // Hago la rotacion
    vector<int> res = rotar(v,k);
    i = 0;
    
    // Imprimo el vector resultado
    while (i < res.size()){
        cout << res[i] << " ";
        i++;
    }

    return 0;
}
