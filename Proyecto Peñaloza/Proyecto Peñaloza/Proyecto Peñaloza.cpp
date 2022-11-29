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
