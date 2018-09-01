#include <stdio.h>
#include <stdlib.h>

int division (float numero1, float numero2, float resultado);

int main()
{

int primerResultado;
float resultado, num1=10, num2=1.5;



    primerResultado = division(num1, num2, &resultado);

if (primerResultado ==0 ) {

    printf ("Division exitosa");
}

    else {
        printf( "No se puede dividir por 0");
    }


    return 0;
}

int division (float numero1, float numero2, float resultado){

        int retorno= -1;
        float resultado;

        if (numero2 != 0) {

            resultado= numero1/numero2;
            retorno=0;
        }

        return retorno;

}
