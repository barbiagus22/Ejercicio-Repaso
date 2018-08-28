#include <stdio.h>
#include <stdlib.h>

/*
 Al presionar el bot&oacute;n pedir  n&uacute;meros  hasta que el usuario quiera, mostrar:</br>
					1-Suma de los negativos.
					2-Suma de los positivos.
					3-Cantidad de positivos.
					4-Cantidad de negativos.
					5-Cantidad de ceros.
					6-Cantidad de números pares.
					7-Promedio de positivos.
					8-Promedios de negativos.
					9-Diferencia entre positivos y negativos, (positvos-negativos).

*/
int main()
{
    int numero;
    char respuesta='s';
    int sumaNegativos=0;
    int sumaPositivos=0;
    int cantidadCeros=0;
    int cantidadPositivos=0;
    int cantidadNegativos=0;
    int cantidadPares=0;
    float promedioPositivos=0;
    float promedioNegativos=0;
    int DiferenciaPyn;

    do
    {
        printf("Ingrese un numero: \n");
        scanf ("%d", &numero);

        if (numero<0)
        {

            sumaNegativos=sumaNegativos+numero;
            cantidadNegativos++;
        }
        else if (numero>0)
        {

            sumaPositivos=sumaPositivos+numero;
            cantidadNegativos++;
        }
        else
        {

            cantidadCeros++;
        }

        if  ( numero%2==0)
        {

            cantidadPares++;
        }


        printf(" Desea continuar si o no:  \n");
        fflush(stdin);
        scanf("%c", &respuesta);


    }while (respuesta== 's');

    promedioPositivos=sumaPositivos/cantidadPositivos;
    promedioNegativos=sumaNegativos/cantidadNegativos;
    DiferenciaPyn=cantidadPositivos-cantidadNegativos;


    printf( " La suma de los negativos es: %d \n", sumaNegativos);
    printf( " La suma de los positivos es: %d \n", sumaPositivos);
    printf( " La cantidad de ceros es %d: \n", cantidadCeros);
    printf( " La cantidad de positivos es: %d \n", cantidadPositivos);
    printf( " La cantidad de negativos es: %d \n", cantidadNegativos);
    printf( " La cantidad de numeros pares es: %d \n", cantidadPares);
    printf(" El promedio de los positivos es : %f\n", promedioPositivos);
    printf(" El promedio de los negativos es : %f\n", promedioNegativos);
    printf(" La diferencia entre positivos y negativos : %d\n", DiferenciaPyn);


}
