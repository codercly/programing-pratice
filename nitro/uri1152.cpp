#include<iostream>
#include<algorithm>
#include<numeric>
#include<utility>
#include<vector>
using namespace std;
//algoritmo de Kruskal complexidade total é m log m

void initSet(vector<int>& pset){
    iota(pset.begin(), pset.end(), 0);
}

int findSet(vector<int>& pset, int i){  //log n tempo gasto com path compression
    return pset[i] == i ? i : pset[i] = findSet(pset, pset[i]);
}

void unionSet(vector<int>& pset, int i, int j){
    pset[findSet(pset, i)] = findSet(pset, j);
}


int main(){
    int m, n;
    vector<pair<int, pair<int , int> > > arestas(m);
    int x, y;
    int custo;
    int custoTotal = 0;

    for(int i = 0; i < m; i++){
        cin >> x >> y >> custo;
        arestas[i] = {custo, {x, y}};
        custoTotal += custo;
    }

    sort(arestas.begin(), arestas.end());

    vector<int> pset(n);
    initSet(pset);

    int ans = 0;
    int total_edges = 0;

    for(int i = 0; total_edges < n - 1 && i < m; i++){
        double peso = arestas[i].first;
        pair<int, int> edge = arestas[i].second;

        if(findSet(pset, edge.first) != findSet(pset, edge.second)){// m log n
            ans += peso;
            unionSet(pset, edge.first, edge.second);
            total_edges++;
        }
        

    }

    return 0;
}