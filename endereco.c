/* endereco.c */
/* Mostra o uso do operador de endereço */

typedef union
{
    int i;
    float f;
    double d;
} Num;

int endereco(void)
{
    Num exemplo;

    printf("\n\n");
    printf("Endereco de i = %08X\n", &exemplo.i);
    printf("Endereco de f = %08X\n", &exemplo.f);
    printf("Endereco de d = %08X\n", &exemplo.d);
    printf("Endereco de x = %08X\n", &exemplo);

    system("PAUSE");
    return 0;

}
