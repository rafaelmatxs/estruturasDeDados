/* ptrgets.c */
/* Mostra o uso de ponteiro como argumento de função */
#include <stdio.h>
void func(char * (*)(char *));

int ptrgets()
{
    char * (*p)(char *);
    p = gets;
    func(p);

    system("PAUSE");
    return 0;
}

void func(char * (*p)(char *))
{
    char nome[80];
    printf("Digite seu nome: ");
    (*p)(nome); /* Chama a função gets() */
    printf("Seu nome e: %s\n", nome);
}
