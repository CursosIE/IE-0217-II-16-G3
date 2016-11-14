#ifndef GRAFO_H
#define GRAFO_H

#include "Vertex.h"
#include "ListaConArreglo.h"
#include "Matrix.h"

class Grafo {
public:

    int hight;
    int depth;
    Vertex* source;
    int num_vertex;
    ListaConArreglo<Vertex>* vertices;
    Matrix* adjacency;
    
    int name;

    Grafo();

    virtual ~Grafo();
    
    void add_vertex(char* v);
    
    void remove_Vertex(Vertex v);
    
    void add_Edge(Vertex v1, Vertex v2);
    
    void removeEdge(int e);
    
    void display();
    
    void bsf();
    
    void search_bfs(int row, int column);
    
    void dfs();
    
    void search_dfs(int row, int column);

private:

};


#endif /* GRAFO_H */

