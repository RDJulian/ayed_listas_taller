#ifndef AYED_LISTAS_TALLER_LISTA_CIRCULAR_HPP
#define AYED_LISTAS_TALLER_LISTA_CIRCULAR_HPP

#include "nodo_lc.hpp"
#include <cstddef>
#include <exception>

class lista_circular_exception : public std::exception {
};

template<typename T>
class lista_circular {
private:
    nodo_lc<T>* primero;
    nodo_lc<T>* cursor;
    size_t cantidad_datos;
public:
    lista_circular();

    void alta(T dato);

    void avanzar();

    void retroceder();

    T obtener_actual();

    size_t tamanio();

    bool vacio();

    ~lista_circular();
};

template<typename T>
bool lista_circular<T>::vacio() {
    return cantidad_datos == 0;
}

template<typename T>
lista_circular<T>::~lista_circular() {
    // Esto conviene hacerlo con un método baja().
    // No se implementó porque en el problema no es necesario eliminar datos.
    nodo_lc<T>* actual;
    nodo_lc<T>* aux;
    actual = primero;
    for (size_t i = 0; i < cantidad_datos; ++i) {
        aux = actual->siguiente;
        delete actual;
        actual = aux;
    }
}

template<typename T>
size_t lista_circular<T>::tamanio() {
    return cantidad_datos;
}

template<typename T>
T lista_circular<T>::obtener_actual() {
    if (!cursor) {
        throw lista_circular_exception();
    }
    return cursor->dato;
}

template<typename T>
void lista_circular<T>::retroceder() {
    if (cursor) {
        cursor = cursor->anterior;
    }
}

template<typename T>
void lista_circular<T>::avanzar() {
    if (cursor) {
        cursor = cursor->siguiente;
    }
}

template<typename T>
lista_circular<T>::lista_circular() {
    cantidad_datos = 0;
    primero = nullptr;
    cursor = nullptr;
}

template<typename T>
void lista_circular<T>::alta(T dato) {
    if (cantidad_datos == 0) {
        nodo_lc<T>* nuevo_nodo = new nodo_lc<T>(dato);
        primero = nuevo_nodo;
        primero->siguiente = primero->anterior = primero;
        cursor = primero;
    } else {
        nodo_lc<T>* nuevo_nodo = new nodo_lc<T>(primero->anterior, primero, dato);
        primero->anterior->siguiente = nuevo_nodo;
        primero->anterior = nuevo_nodo;
    }
    cantidad_datos++;
}

#endif