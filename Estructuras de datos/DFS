#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool vis[10000];
vector<int> grafo[10000];
void dfs(int inicial) {
    stack<int> pilita;
    pilita.push(inicial);
    while(!pilita.empty()){//la pilita no esta vacia
        int actual = pilita.top();//obtener el primer elemento
        pilita.pop();
        vis[actual] = true;//marco como visitado al nodo actual
        //empezar a visitar a sus amigos
        for(int i = 0; i < grafo[actual].size();i++){//vecino o amigo
            int amigo = grafo[actual][i]
        }
    }
}
//dfs (busqueda en profundidad)te dice si existe un camino de un nodo a otro
//bfs (busqueda en anchura)te puede dar el camino mas corto

int main(){
    int nodos, aristas;
    cin>>nodos>>aristas;
    for(int i = 0; i < aristas; i++){
        int inicial, final;
        cin>>inicial>>final;
        grafo[inicial].push_back(final);
    }
    // Si el nodo S puede llegar al nodo T
    int S,T; // 1 7
    cin>>S>>T;
    dfs(S);
    if(vis[T]) { // logre visitar el 7 
        cout<<"Si lo podria conocer"<<endl;
    } else {
        cout<<"No lo podria conocer"<<endl;
    }

}
