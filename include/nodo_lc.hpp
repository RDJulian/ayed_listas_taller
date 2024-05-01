#ifndef AYED_LISTAS_TALLER_NODO_LC_HPP
#define AYED_LISTAS_TALLER_NODO_LC_HPP

// Forward declaration
template<typename T>
class lista_circular;

template<typename T>
class nodo_lc {
private:
    T dato;
    nodo_lc<T>* anterior;
    nodo_lc<T>* siguiente;
public:
    nodo_lc(T dato);

    nodo_lc(nodo_lc<T>* anterior, nodo_lc<T>* siguiente, T dato);

    // Esto permite acceder a los atributos del nodo desde la lista sin getters/setters.
    friend class lista_circular<T>;
};

template<typename T>
nodo_lc<T>::nodo_lc(nodo_lc<T>* anterior, nodo_lc<T>* siguiente, T dato) {
    this->dato = dato;
    this->anterior = anterior;
    this->siguiente = siguiente;
}

template<typename T>
nodo_lc<T>::nodo_lc(T dato) {
    this->dato = dato;
    anterior = nullptr;
    siguiente = nullptr;
}

#endif