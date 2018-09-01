#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float ingresarNumero(char mensaje[]);

int main()
{
    int flag =1, opcion;
    float numero1, numero2;
    float flagA=0, flagB=0;

    //int banderaoperando1=0; =flag
    //int banderaoperando2=0; =flag

    //getchar (); para aplicacion para ver que ocurre.

    do
    {
        system("cls");

        printf("  MENU \n\n");

            if (flagA==1){

                printf("1. Ingrese 1er operando (A= %.2f) \n", numero1);
            }
            else
            {
                printf("1. Ingrese 1er operando (A=x) \n", numero1);
            }



        if (flagB==1){

                printf("2. Ingrese 2do operando (B= %.2f)\n", numero2);
            }
            else
            {
                printf("2. Ingrese 2do operando (B=x)\n", numero2);
            }



        printf(" \n\n INGRESE UNA OPCION DEL MENU:\n");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            numero1 = ingresarNumero("Ingrese un 1er operando\n");
            flagA =1;
            break;
        case 2:
            numero2 = ingresarNumero("Ingrese un 2er operando\n");
            flagB =1;
            break;
            // case 3
            /*if flagA ==1 && flogB ==1
            {
                prinf ("calculador");
                suma()
                resta()
                etc
            }
            else {
                "Ingrese los numero"
            }

            */

            //  printf ("Ingrese un 2do operando\n");
            // scanf( "%d", &operando2);
            //break;
            // default:
            //    printf ("Ingrese una opcion valida");

            /*  case 3:

                  suma ();
                  */
        }


    }
    while(flag);


    // fpurge (stdin/;
    //printf ("\ ingrese ENTER para continuar...");
    //getchar();
    //system("clear");

    return 0 ;
}

float ingresarNumero(char mensaje[])
{
    float numero;
    printf("%s",mensaje);
    scanf("%f", &numero);
    return numero;
}

