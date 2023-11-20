/* ptrgets.c */
/* Mostra o uso de ponteiro como argumento de fun��o */
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
    (*p)(nome); /* Chama a fun��o gets() */
    printf("Seu nome e: %s\n", nome);
}
