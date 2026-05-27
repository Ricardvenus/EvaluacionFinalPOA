#include <iostream>
#include <string>
using namespace std;

// Módulo para clasificar el nivel de compromiso
string clasificarCompromiso(int duracion, int clics) {
    if (duracion > 180 && clics > 8)
        return "Alto";
    else if (duracion < 60 || clics < 3)
        return "Bajo";
    else
        return "Medio";
}

int main() {
    // Matriz: [ID Cliente, Duración (seg), Eventos Clics]
    int sesiones[5][3] = {
        {101, 200, 12},
        {102,  45,  1},
        {103, 120,  5},
        {104, 190,  9},
        {105,  80,  2}
    };

    int filas = 5;

    cout << "===== INFORME DE COMPROMISO DE SESIONES =====" << endl;
    cout << "ID Cliente | Duracion (s) | Clics | Clasificacion" << endl;
    cout << "---------------------------------------------" << endl;

    for (int i = 0; i < filas; i++) {
        int id       = sesiones[i][0];
        int duracion = sesiones[i][1];
        int clics    = sesiones[i][2];

        string nivel = clasificarCompromiso(duracion, clics);

        cout << "   " << id
             << "      |     " << duracion
             << "      |   " << clics
             << "   | " << nivel << endl;
    }

    return 0;
}