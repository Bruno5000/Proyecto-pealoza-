//Cadenas 3
#include <stdio.h>
#include <string.h>

int dividePalabra(char* buffer, char tabla[][80])/*lo que hace esta funcion es contar las palabras,
pero ademas esta modificando el char buffer que en este caso es 'bufer', pero puede llebar caulquier otro
nombre,*/
{
    int numPalabra = 0;
    int caracterBuffer, caracterDestino;
    printf("%s", buffer);
    caracterBuffer = 0;
    while (buffer[caracterBuffer] != '\0')
    {
        caracterDestino = 0;
        while (buffer[caracterBuffer] != ' ' && buffer[caracterBuffer] != '\0')
            tabla[numPalabra][caracterDestino++] = buffer[caracterBuffer++];
        tabla[numPalabra][caracterDestino] = '\0';
        if (buffer[caracterBuffer] != '\0')
            caracterBuffer++;
        numPalabra++;
    }

    return numPalabra;
}
int main(int argc, char* argv[])//esta es la forma estandar de declarar la funcion main 
{
    char arrCads[5];
    char buffer[300];
    char diccionario[10][80];
    int lasPalabras;
    int i;

    printf(">");
    gets_s(buffer, 300);
    lasPalabras = dividePalabra(buffer, diccionario);//
    printf("\nSe detectaron %i palabras: ", lasPalabras);
    for (i = 0; i < lasPalabras; i++)
        printf("\n%s", diccionario[i]);
}

//Quiso decir 2da parte del programa 
/*****************************************************************************************************************
    UNIVERSIDAD NACIONAL AUTONOMA DE MEXICO
    FACULTAD DE ESTUDIOS SUPERIORES -ARAGON-
    Computadoras y programacion.
    (c) Bruno Ramírez Picazo Bruno
    Quiso decir: Programa principal de la aplicacion de la distancia de Levenstein.
******************************************************************************************************************/
// quisodecir.cpp: define el punto de entrada de la aplicación de consola.
//

#include <string.h>
#include <stdio.h>
#define TAMTOKEN 50
//#include "stdafx.h"
//#include "corrector.h"

void	Diccionario(char* szNombre, char szPalabras[][TAMTOKEN], int iEstadisticas[], int& iNumElementos)
{
