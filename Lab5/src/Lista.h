#ifndef LISTA_H
#define LISTA_H

template <typename T>
class Lista{ //lista de ints
public:
    Lista(){};
    Lista(const Lista& orig){};
    virtual ~Lista(){};

    virtual void agregar(T e) = 0;
    virtual void eliminar() = 0;
    virtual void eliminar_u()=0;
    virtual void imprimir() = 0;
private:

};

#endif /* LISTA_H */