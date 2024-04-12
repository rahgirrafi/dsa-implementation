#ifndef GRAPH_HPP
#define GRAPH_HPP

//implement a graph data structure

#include <iostream>

class Graph {
    private:
        int V;
        int E;
        int** adj;
    public:
        Graph(int V, int E);
        ~Graph();
        void addEdge(int v, int w);
        void removeEdge(int v, int w);
        bool isEdge(int v, int w);
        void print();
};

#endif