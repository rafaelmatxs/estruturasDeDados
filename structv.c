/* structv.c */
/* Mostra passagem de estruturas para funções por valor */
/* Mostra uma função que retorna uma estrutura */

typedef struct Venda
{
    int pecas;
    float preco;
} Venda;

Venda TotalVendas(Venda C, Venda D); /* Protótipo */

int structv()
{
    Venda A, B, Total;

    printf("Venda A\n=======\n");
    printf("Insira o numero de pecas: ");
    scanf("%d", &A.pecas);
    printf("Insira os precos: ");
    scanf("%f", &A.preco);

    printf("\nVenda B\n=======\n");
    printf("Insira o numero de pecas: ");
    scanf("%d", &B.pecas);
    printf("Insira o preco: ");
    scanf("%f", &B.preco);
    Total = TotalVendas(A,B); /* Estruturas como argumento e retorno */

    printf("\n\nVenda Total\n===========");
    printf("\nTotal de pecas: %d.", Total.pecas);
    printf("\nPreco total: %.2f\n", Total.preco);

    system("PAUSE");
    return 0;
}

Venda TotalVendas(Venda C, Venda D)
{
    Venda T;
    T.pecas = C.pecas + D.pecas;
    T.preco = C.preco + D.preco;
    return T;
}
