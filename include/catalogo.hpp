#ifndef AYED_LISTAS_TALLER_CATALOGO_HPP
#define AYED_LISTAS_TALLER_CATALOGO_HPP

#include "serie.hpp"
#include "lista_circular.hpp"

class catalogo {
private:
    lista_circular<serie> catalogo_series;

    void mostrar_serie();

public:
    catalogo() = default;

    void agregar_serie(serie serie_nueva);

    void mostrar_serie_siguiente();

    void mostrar_serie_anterior();

    size_t obtener_cantidad_series();

    ~catalogo() = default;
};

#endif