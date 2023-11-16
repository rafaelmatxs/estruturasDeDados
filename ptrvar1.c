
/* ptrvar1.c */
/* Mostra a inicialização do ponteiro */

int ptrvar1()
{
    int x, y;
    int *px = &x; /* Inicializa px com o endereco de x */

    *px = 14;     /* O mesmo que x = 14 */
    y = *px;      /* O mesmo que y = x */

    printf("y = %d\n", y);

    system("PAUSE");
    return 0;
}
