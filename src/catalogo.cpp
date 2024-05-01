#include "catalogo.hpp"
#include <iostream>

void catalogo::mostrar_serie() {
    if (!catalogo_series.vacio()) {
        std::cout << catalogo_series.obtener_actual() << std::endl;
    } else {
        std::cout << "El catalogo esta vacio." << std::endl;
    }
}

void catalogo::mostrar_serie_siguiente() {
    catalogo_series.avanzar();
    mostrar_serie();
}

void catalogo::mostrar_serie_anterior() {
    catalogo_series.retroceder();
    mostrar_serie();
}

void catalogo::agregar_serie(serie serie_nueva) {
    catalogo_series.alta(serie_nueva);
}

size_t catalogo::obtener_cantidad_series() {
    return catalogo_series.tamanio();
}