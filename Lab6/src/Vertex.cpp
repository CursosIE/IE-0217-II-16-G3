#include "Vertex.h"

Vertex::Vertex() {
    value = 0x0;
    visited = false;
    nivel=0;
}

Vertex::Vertex(bool visit, char* val) {

    value =  val;
    visited = visit;
    nivel=0;

}

//Vertex::~Vertex() {
//    delete value;
//};

