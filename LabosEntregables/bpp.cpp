#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int ordenarDivision(vector<int> &v, int izq, int der) {
    int pivotIndex = izq + (der - izq) / 2;
    int pivotValue = v[pivotIndex];
    while(izq <= der) {
        while(v[izq] > pivotValue) {
            izq++;
        }
        while(v[der] < pivotValue) {
            der--;
        }
        if(izq <= der) {
            int temp = v[izq];
            v[izq] = v[der];
            v[der] = temp;
            izq++;
            der--;
        }
    }
    return izq;
}

void quicksort(vector<int> &v, int izq, int der) {
    if(izq < der) {
        int pivot = ordenarDivision(v, izq, der);
        quicksort(v, izq, pivot - 1);
        quicksort(v, pivot, der);
    }
}

void ordenar(vector<int> &items){
    quicksort(items, 0, items.size() - 1);
}

int bestFit(int W, vector<int> &items){
    multiset<int> restos;
    for(int i=0; i<(int)items.size(); ++i){
        restos.insert(W);
    }
    int res = 0;
    for(int i=0; i<(int)items.size(); ++i){
        multiset<int>::iterator it = restos.lower_bound(items[i]);
        int restoAct = *it;
        if(restoAct==W){
            res++;
        }
        restoAct -= items[i];
        restos.erase(it);
        restos.insert(restoAct);
    }
    return res;
}

int main(){
    int N, W, aux;

    //Se levantan los items y la capacidad del contenedor
    cin >> N >> W;
    vector<int> items;
    for(int i=0; i<N; ++i){
        cin >> aux;
        items.push_back(aux);
    }
    //Se corre best-fit
    int cant1 = bestFit(W, items);
    cout << "Con la idea bestFit, se consigue una asignacion con " << cant1 << " contenedores" << endl;

    //Se ordenan los items
    ordenar(items);
    //Se corre best-fit-decreasing
    int cant2 = bestFit(W, items);
    cout << "Con la idea bestFitDecreasing, se consigue una asignacion con " << cant2 << " contenedores" << endl;

    return 0;
}

