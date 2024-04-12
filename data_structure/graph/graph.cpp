#include <iostream>
#include "graph.hpp"

Graph::Graph(int V, int E){
    this->V = V;
    this->E = E;
    adj = new int*[V];
    for(int i=0; i<V; i++){
        adj[i] = new int[V];
        for(int j=0; j<V; j++){
            adj[i][j] = 0;
        }
    }
}

Graph::~Graph(){
    for(int i=0; i<V; i++){
        delete[] adj[i];
    }
    delete[] adj;
}

void Graph::addEdge(int v, int w){
    adj[v][w] = 1;
    adj[w][v] = 1;
}

void Graph::removeEdge(int v, int w){
    adj[v][w] = 0;
    adj[w][v] = 0;
}

bool Graph::isEdge(int v, int w){
    return adj[v][w] == 1;
}

void Graph::print(){
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            std::cout << adj[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    Graph g(4, 4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.print();
    return 0;
}

