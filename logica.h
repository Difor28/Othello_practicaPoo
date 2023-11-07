#ifndef LOGICA_H
#define LOGICA_H
#include "tablero.h"



class logica
{
private:

    tablero partida;

public:
    logica();


    // nos dice si hay juego en la
    // coordenada, en cuyo caso lo haya
    // enviara un true
    bool restriccion( char* coordernada,char rival);

    // organiza la coordenada y en cuyo caso
    // no se pueda organizar porque esta mal
    // escrita bota un false
    // #letra #numero
    bool ordenar(char* coordernada);

    // se encarga de decir si por ese camino
    // se puede cambiar las fichas de color
    bool buscardor(char rival,short f ,short c, short i, short e );



};

#endif // LOGICA_H
