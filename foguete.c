/* foguete.c */
/* Movimenta imagem na tela */
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define LIN 10
#define COL 5

int foguete()
{
    int cont, j, k;
    char *ptr[LIN];
    char *temp;

    static char foguet[LIN][COL] =
        {
            { 0, 0, 0, 0, 0},
            { 0, 0, 0, 0, 0},
            { 0, 0, 0, 0, 0},
            { 0, 0, 0, 0, 0},
            { 0, 0, 0, 0, 0},
            { 0, 0, 0, 0, 0},
            { 0, 0, 0, 0, 0},
            { 0, 0, 0, 0, 0},
            { 0, 0, '\x1E', 0, 0},
            { 0, '\x1E', '\xDB', '\x1E', 0 } };

    static char terra[]=
        { '\xCD', '\xCD', '\xCD', '\xCD', '\xCD', '\0'};

    for(cont=0; cont<LIN ;cont++)
        *(ptr+cont)=*(foguet+cont);
    for(cont=0; cont<LIN-1 ;cont++)
    {
        for(j=0; j<LIN ;j++)
        {
            for(k=0; k<COL ;k++)
                printf("%c", *(*(ptr+j)+k)); /* ptr[j][k] */
            printf("\n");
        }
        printf("%s\n", terra);
        getch();
        system("cls");
        temp=*ptr;
        for(j=0; j<LIN-1 ;j++)
            *(ptr+j) = *(ptr+j+1);
        *(ptr+LIN-1)=temp;
    }
    system("PAUSE");
    return 0;
}


