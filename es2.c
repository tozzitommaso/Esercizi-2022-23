#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float costo;
    double totale = 0, sconto;
    char risposta;

    do
    {
        printf("Quanto hai pagato il prodotto che hai acquistato?\n");
        scanf("%e", &costo);

        if (costo < 500)
        {
            sconto = (costo * 10) / 100;
            printf("Si applica lo sconto del 10percento\n");
        }
        if (501 <= costo <= 1000)
        {
            sconto = (costo * 20) / 100;
            printf("Si applica lo sconto del 20percento\n");
        }
        if (costo >= 1001)
        {
            sconto = (costo * 30) / 100;
            printf("Si applica lo sconto del 30percento\n");
        }

        totale = totale + sconto;

        printf("Hai comprato qualche altro articolo?\n");
        scanf("%c", &risposta);

    } while (risposta == 's');

    printf("Il totale ammonta a %e", totale);

    return 0;
}
