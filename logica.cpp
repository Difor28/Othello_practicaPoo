#include "logica.h"


logica::logica()
{

}

bool logica::restriccion(char *coordernada,char rival)
{
    //L=limite ,C=columna ,F=fila, i=inferior ,s=superior
    short LCi=-1,LCs=1,LFi=-1,LFs=1;
    if( (!ordenar(coordernada)) or
        (partida.observador(short(coordernada[1]-48),short(coordernada[0]-65) != ' ')))
        return false;

    if( coordernada[1] == '1') LCi=0;
    else if( coordernada[1] == '8') LCs=0;

    if( coordernada[0] == 'A') LFi=0;
    else if( coordernada[1] == 'H') LFs=0;

    for(short i=LCi;i<=LCs;++i){

        for(short e=LFi,f=short(coordernada[1])-48;e<=LFs;++e){
            if(rival == partida.observador((f+i),short(coordernada[0])-65+e))
                ;

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
