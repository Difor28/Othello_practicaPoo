#include "logica.h"


logica::logica()
{

}

bool logica::restriccion(char *coordernada,char rival)
{
    //L=limite ,C=columna ,F=fila, i=inferior ,s=superior
    short LCi=-1,LCs=1,LFi=-1,LFs=1, f=short(coordernada[1])-48, c=short(coordernada[0])-65;
    if( (!ordenar(coordernada)) or
        (partida.observador(short(f),short(c) != ' ')))
        return false;

    if( coordernada[1] == '1') LCi=0;
    else if( coordernada[1] == '8') LCs=0;

    if( coordernada[0] == 'A') LFi=0;
    else if( coordernada[1] == 'H') LFs=0;


    for(short i=LCi;i<=LCs;++i){

        for(short e=LFi;e<=LFs;++e){
            if(rival == partida.observador((f+i),c+e))
                buscardor(rival,f+i,c+e,i,e);

        }
    }

    return true;
}

bool logica::ordenar(char *coordernada)
{
    if(int((48 <= coordernada[0]) and int(coordernada[0]) <= 56) and
        (int(65 <= coordernada[1]) and int(coordernada[1]) <= 73) ){
        char A= coordernada[0];
        coordernada[0]=coordernada[1];
        coordernada[1]=A;
    }
    else if( (int(65 <= coordernada[0]) and int(coordernada[0]) <= 73) and
               ((48 <= coordernada[1]) and int(coordernada[1]) <= 56) );

    else return false;

    return true;
}

bool logica::buscardor(char rival, short f, short c, short i, short e)
{
    if((0<=f and f<= 8) and (0<=c and c<= 8) and (partida.observador(f,c)== rival) )
        buscardor(rival,f+i,c+e,i,e);
    else if((0<=f and f<= 8) and (0<=c and c<= 8) and (partida.observador(f,c) != ' '))
         return true;

    return false;
}
