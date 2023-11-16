/* sizeof1.c */
/* Mostra o uso do operador sizeof() */

union Numero
{
    char str[32];
    int i;
    float f;
} x; /* Cria variável */

int sizeof1(void)
{
    printf("%d\n", sizeof(union Numero));
    printf("%d\n", sizeof(x));

    system("PAUSE");
    return 0;
}

