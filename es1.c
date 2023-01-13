#include <stdio.h>
#include <math.h>

void main()
{
    float  somma = 0, cont, media;
    int n,numeri;
    cont = 0;

    printf("Quanti numeri vuoi scrivere?\n");
    scanf("%d", &n);

    do
    {
        printf("inserisci un numero\n");
        scanf("%d", &numeri);
        n--;
        if(numeri > 5 && numeri % 2==0){
        somma = somma + numeri;
        cont++;
        }

    } while (n>0);
    printf("\n");
    media = somma / cont;
    printf("La somma è: %f\n", somma);
    printf("La media è: %f\n", media);
}