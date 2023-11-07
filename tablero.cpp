#include "tablero.h"

tablero::tablero()
{
    for (short var = 0; var < 8; ++var)
    {
        cuadrado[var]= new char(8);

        for(short i=0 ;i <8; ++i)
            cuadrado[var][i]=' ';

        if(var == 3 ){
            cuadrado[var][3]='*';
            cuadrado[var][4]='-';
        }
        else if(var == 4){
            cuadrado[var][3]='-';
            cuadrado[var][4]='*';
        }

    }
}

char tablero::observador(short f, short c)
{
    return cuadrado[f][c];
}

void tablero::manipulador(short f, short c, char cambio)
{
    cuadrado[f][c]=cambio;
}

void tablero::Exhibidor()
{
    cout<<"  ";
    for(short i=0; i< 8; ++i) cout<<char(65+i)<<' ';

    cout<<endl;

    for (short var = 0; var < 8; ++var){
        cout << var+1<<' ';
        for(short i= 0; i < 8; ++i){
            cout <<cuadrado[var][i]<<' ';
        }
        cout << var+1<<' ';
        cout<<endl;
    }

    cout<<"  ";
    for(short i=0; i< 8; ++i) cout<<char(65+i)<<' ';
    cout<<endl;



}
