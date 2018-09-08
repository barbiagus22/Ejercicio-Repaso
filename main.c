#include <stdio.h>
#include <stdlib.h>
#define TAM 6

int buscarNumtamero (int vector [], int tam, int valor);
void mostrarVector ( int vec[], int tam );
int buscarMayor (int vector [], int tam);

int main()
{
    char respuesta='s';
    int numero;
    int indice;
    int vector[TAM] = {0};
    int numeroMayor;

    do
    {

        printf("Ingrese numero: ");
        scanf("%d", &numero);

        printf("Ingrese indice: ");
        scanf("%d", &indice);

        vector[indice]=numero;

        printf("Continuar: ");
        fflush(stdin);
        scanf("%c", &respuesta);


    }
    while (respuesta== 's');


    mostrarVector (vector,TAM);
    indice= buscarNumero (vector,TAM, 20);

    if (indice != -1)
    {
        printf("El valor se encuentra en el indice es %d \n", indice);
    }
    else
    {
        printf("El numero no esta");
    }

    numeroMayor= buscarMayor (vector,TAM);

    printf( "El mayor numero en el vector es: %d \n", numeroMayor);

    return 0;
}



void mostrarVector ( int vec[], int tam )
{

    for (int i=0; i<tam; i ++)
    {

        printf( "%d \n\n ",vec[i]);

    }

}

int buscarNumero (int vector [], int tam, int valor)
{
    int indice=-1;

    for (int i=0; i<tam; i ++)
    {

        if (vector[i]== valor)
        {

            indice=i;
            break;
        }

    }

    return indice;
}


int buscarMayor (int vector [], int tam)
{

    int mayor=vector [0];

    for (int i=0; i<tam; i ++)
    {

        if  (vector [i]>mayor )
        {

            mayor=vector [i];
        }

    }

    return mayor;
}











