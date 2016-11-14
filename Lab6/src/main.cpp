#include <cstdlib>

#include "Grafo.h"

#include <string.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
   
    
 Grafo* prueba= new Grafo();
  char* ax = new char('A');
  prueba->add_vertex(ax);

  char* bx = new char('B');
  prueba->add_vertex(bx);
  //prueba->adjacency->print();//***impresion

  char* cx = new char('C');
  prueba->add_vertex(cx);
  //prueba->adjacency->print();//***impresion

  char* dx = new char('D');
  prueba->add_vertex(dx);
  cout<<"Matriz 4x4 creada para un grafo de 4 vertices"<<endl;
  prueba->adjacency->print();//***impresion

  Vertex a;
  a.value=ax;

  Vertex b;
  b.value= bx;

  Vertex c;
  c.value= cx;
  
  Vertex d;
  d.value= dx;  

  prueba->add_Edge(a,b);
  prueba->add_Edge(b,d);  
  prueba->add_Edge(c,d);
  prueba->add_Edge(c,a);
  
  cout<<"Matriz de adyacencia"<<endl;  
  prueba->adjacency->print();
  
  cout<<"Display del grafo"<<endl;
  prueba->display();
  cout<<"Depth first search"<<endl;  
  prueba->dfs();
  cout<<"Breadth first search"<<endl;  
  prueba->bsf();


  /*prueba->removeEdge(1);
  prueba->adjacency->print();*/
    
    
  return 0;
}

