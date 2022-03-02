#include<stdio.h>
#include<string.h>
#include<stdlib.h> // MALLOC


char* string_concat( const char* palabra1, const char* palabra2)
{
    char saludo[50];
    strcpy(saludo,palabra1);
    strcat(saludo,palabra2);

    char* combinacion = (char*)malloc(strlen(saludo)+1*sizeof(char));

    strcpy(combinacion,saludo);

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
