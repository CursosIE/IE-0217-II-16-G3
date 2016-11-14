
#ifndef VERTEX_H
#define VERTEX_H

class Vertex {
public:

    char* value;
    bool visited;
    int nivel;

    Vertex();

    Vertex(bool visit, char* val);

    //virtual ~Vertex();

private:

};

#endif /* VERTEX_H */

