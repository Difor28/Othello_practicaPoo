#ifndef TABLERO_H
#define TABLERO_H

#include <iostream>
using namespace std;



class tablero
{
private:


    //matriz 2x2 donde se guarda el tablero
    char **cuadrado= new char *[8];
    short negras=0,blancas=0;

public:
    // creamos la matriz mediante punteros
    tablero();

    // damos el dato que nos pida el programa
    char observador( short f , short c);

    //cambiamos el dato que nos pida el programa
    void manipulador( short f , short c , char cambio);

    // imprime el tablero completo al usuario
    // con esto puede saber el estado de la
    // partida en tiempo real
    void Exhibidor();

};

#endif // TABLERO_H
