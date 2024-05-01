#ifndef AYED_LISTAS_INTRODUCCION_SERIE_HPP
#define AYED_LISTAS_INTRODUCCION_SERIE_HPP

#include <string>
#include <iostream>

class serie {
private:
    std::string titulo;
    std::string descripcion;
public:
    serie() = default;

    serie(std::string titulo, std::string descripcion);

    friend std::ostream& operator<<(std::ostream& os, const serie& serie1);
};

#endif