/*Pedir dos n�meros y decir cual es el mayor o si son iguales*/

#include <stdio.h>

int main (){
    int numero1, numero2;

    //Se piden los valores para numero1 y numero2
    printf("Digite el valor del #1: ");
    scanf("%d",&numero1);

    printf("Digite el valor del #2: ");
    scanf("%d",&numero2);

    //se verifica si numero1 es mayor que numero 2
    if(numero1 > numero2){
        printf("%d es mayor",numero1);
    }else{
        //se verifica si numero2 es mayor
        if(numero1 < numero2){
            printf("%d es mayor",numero2);
        }else{
            printf("Son iguales");
        }
    }

    return 0;
}

