#include<bits/stdc++.h>
using namespace std;

bool vis[10000];
vector<int> grafo[10000];
int niveles[10000];
void bfs (int inicial) {
    queue<int> colita;
    colita.push(inicial);
    niveles[inicial] = 0;
    while(!colita.empty()){ // la cola esta vacia?
        int actual = colita.front(); // obtener el primer elemento de la cola

        colita.pop();
        if(!vis[actual]) {
            vis[actual] = true; // Marco como visitado al nodo actual
            // empezar a visitar a sus bros
            for(int i = 0; i < grafo[actual].size(); i++ ){
                int bro = grafo[actual][i]; // bro
                niveles[bro] = niveles[actual] + 1;
                if(!vis[bro]) { // El bro no ha sido visitado ?
                    colita.push(bro);
                } 
            }   
        }
    }
}


int main() {
    input;
    int nodos, aristas;
    cin>>nodos>>aristas; // 11 19
    for(int i = 0 ; i < aristas; i++ ) {
        int inicial, final;
        cin>>inicial>>final;
        grafo[inicial].push_back(final);
    }
    // Si el nodo S puede llegar al nodo T
    int S,T; // 1 7
    cin>>S>>T;
    bfs(S);
    if(vis[T]) { // logre visitar el 7 
        cout<<"Si lo podria conocer"<<endl;
    } else {
        cout<<"No lo podria conocer"<<endl;
    }
}
