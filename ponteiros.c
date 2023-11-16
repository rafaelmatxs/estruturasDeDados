/* ponteiros.c */
/* Mostra o uso de ponteiros variáveis */

void reajusta20(float *, float *); /* Protótipo */

int ponteiros()
{
    float val_preco, val_reaj;
    do
    {
        printf("\nInsira o preco atual: ");
        scanf("%f", &val_preco);
        reajusta20(&val_preco, &val_reaj); /* Enviando enderecos */
        printf("\nO preco novo e %.2f\n", val_preco);
        printf("O aumento foi de %.2f\n", val_reaj);
    } while(val_preco != 0.0);

    system("PAUSE");
    return 0;
}

/* reajusta20() */
/* Reajusta o preco em 20% */
void reajusta20(float *preco, float *reajuste)
{
    *reajuste = *preco * 0.2;
    *preco *= 1.2;
}

