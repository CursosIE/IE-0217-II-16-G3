#ifndef EDGE_H
#define EDGE_H

template <typename type> class Edge {
public:

    type* id;

    Edge() {
        id = 0x0;

    };

    Edge(type* name) {

        id = name;
        
    };

    virtual ~Edge() {
        delete id;
    };

private:

};

#endif /* EDGE_H */