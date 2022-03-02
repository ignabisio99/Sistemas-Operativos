#include<stdio.h>
#include<string.h>
#include<stdlib.h> // MALLOC


char* string_concat( const char* palabra1, const char* palabra2)
{
    
    int longitud = strlen(palabra1) + strlen(palabra2);

    char* combinacion = (char*)malloc(longitud+1*sizeof(char));

    strcpy(combinacion,palabra1);
    strcat(combinacion,palabra2);

    return combinacion; 
    
}

int main()
{

    char* nombre = "Ignacio";
    char* saludo = string_concat("Hola ",nombre);
    
    printf("La combinacion para el saludo queda: \n");
    printf("%s",saludo);

    return 0;
}
