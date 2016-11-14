#include "Grafo.h"
#include <stack>


Grafo::Grafo() {
    hight=0;
    depth=0;
    num_vertex=0;
    source=0x0;
    vertices= new  ListaConArreglo<Vertex>();
    adjacency = new Matrix(0);

    name=0;
};


Grafo::~Grafo() {
    delete vertices;
    delete adjacency;
}

void Grafo::add_vertex(char* v){
    Vertex* n = new Vertex(false, v);
    if(num_vertex==0){
        source = n;
    }

    vertices->agregar(*n); //agrega en la lista de vertices
    adjacency->change_size(adjacency->size+1);
    num_vertex++;

}

void Grafo::remove_Vertex(Vertex v){
    int index;
   
    for(int i=0; i<vertices->tam; i++){
            if(*(vertices->data[i].value)==*(v.value)){
                index=i;
            }
        }
    vertices->eliminarK(index);

    adjacency->remove_rowcolumn(index+1);
    num_vertex--;
}

void Grafo::add_Edge(Vertex v1, Vertex v2){
    if(vertices->tam>0){

        int v_1;
        int v_2;
        
        
        
        for(int i=0; i<vertices->tam; i++){
            if(*(vertices->data[i].value)==*(v1.value)){
                v_1=i;
            }
            if(*(vertices->data[i].value)==*(v2.value)){
                v_2=i;
            }
        }

        v2.nivel= v1.nivel+1;

        name=name+1;
        adjacency->matrix[v_1][v_2]=name;
        adjacency->matrix[v_2][v_1]=name;

    }
}

void Grafo::removeEdge(int e){
   
    *(adjacency->find_edge(e))=0;
    *(adjacency->find_edge(e))=0;  
}

void Grafo::display(){
    
  for(int i=0;i<this->num_vertex;i++){
    cout<<*(this->vertices->recuperar(i).value);
  }
  cout<<endl;
}

void Grafo::bsf(){  
    cout<<*(source->value);
    vertices->data[0].visited=true;
    search_bfs(0,0);
    
    cout<<""<<endl;
    for(int i=0; i<num_vertex; i++){
        vertices->data[i].visited=false;
    }
}

void Grafo::search_bfs(int row, int column){ 
    
    ListaConArreglo<int> stack;
    
    if(adjacency->matrix[row][column]>0 && vertices->data[row].visited==false){
        
        cout<< *(vertices->data[row].value);
        vertices->data[row].visited=true;
        stack.agregar(row);

    }
    
    if(row<num_vertex-1){
        search_bfs(row+1,column);
    }
    if(stack.tam>0){
        search_bfs(0,stack.data[0]);
        stack.eliminar();
    }
    
}

void Grafo::dfs(){
    cout<<*(source->value);
    vertices->data[0].visited=true;
    search_dfs(0,0);
    
    cout<<""<<endl;
    
    for(int i=0; i<num_vertex; i++){
        vertices->data[i].visited=false;
    }
}


void Grafo::search_dfs(int row, int column){ 
    if(adjacency->matrix[row][column]>0 && vertices->data[row].visited==false){ 
        cout<< *(vertices->data[row].value);
        vertices->data[row].visited=true;
        search_dfs(0,row);
    }
    else{
        if(row<num_vertex-1){
            search_dfs(row+1, column);
        }
    }
    
}


