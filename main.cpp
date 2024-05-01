#include "catalogo.hpp"

int main() {
    catalogo catalogo1;
    catalogo1.agregar_serie({"Bleach", "Accion, Bankai, algo asi, pelean"});
    catalogo1.agregar_serie({"One Piece", "El One Piece es real"});
    catalogo1.agregar_serie({"One Punch Man", "El pelado es fuerte"});
    for (size_t i = 0; i < catalogo1.obtener_cantidad_series(); ++i) {
        catalogo1.mostrar_serie_siguiente();
    }
    for (size_t i = 0; i < catalogo1.obtener_cantidad_series(); ++i) {
        catalogo1.mostrar_serie_anterior();
    }
    return 0;
}