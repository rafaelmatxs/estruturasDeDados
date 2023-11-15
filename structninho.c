/* structninho.c */
/* Mostra estruturas aninhadas */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    char mes[10];
    int ano;
} Data;

typedef struct
{
    int pecas;
    float preco;
    Data diavenda;
} Venda;

int structNinho()
{
    static Venda A = { 20, 110.0, {7, "novembro", 2001} };
    printf("Pecas: %d\n", A.pecas);
    printf("Preco: %.2f\n", A.preco);
    printf("Data: %d de %s de %d\n",
           A.diavenda.dia, A.diavenda.mes, A.diavenda.ano);
    system("PAUSE");
    return 0;
}
