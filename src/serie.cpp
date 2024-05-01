#include "serie.hpp"
#include <utility>

serie::serie(std::string titulo, std::string descripcion) {
    this->titulo = std::move(titulo);
    this->descripcion = std::move(descripcion);
}

std::ostream& operator<<(std::ostream& os, const serie& serie1) {
    os << serie1.titulo << "\n" << serie1.descripcion << std::endl;
    return os;
}