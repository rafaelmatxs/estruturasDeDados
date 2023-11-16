/* ptroperacoes.c */
/* Mostra as operacoes possiveis com ponteiros */

int ptroperacoes()
{
    unsigned int x=5, y=6;
    unsigned int *px, *py;

    px = &x; /* Atribui��es */
    py = &y;

    if(px < py) /* Compara��es */
        printf("py-px= %u\n", (py-px)); /* Subtra��o */
    else
        printf("px-py= %u\n", (px-py));

    printf("px = %p", px);
    printf(", *px = %u", *px); /* Op. Indireto */
    printf(", &px = %p\n", &px); /* Op. Endere�os */

    printf("py = %p", py);
    printf(", *py = %u", *py);
    printf(", &py = %p\n", &py);

    py++; /* Incremento */

    printf("py = %p", py);
    printf(", *py = %u", *py);
    printf(", &py = %p\n", &py);

    px = py + 5; /* Somar inteiros */

    printf("px = %p", px);
    printf(", *px = %u", *px);
    printf(", &px = %p\n", &px);

    printf("px-py= %u\n", (px-py));

    system("PAUSE");
    return 0;
}
