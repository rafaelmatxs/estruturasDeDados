
int pcadeiacharconst()
{
    char s1[] = "saudacoes!";
    char *s2 = "saudacoes!";

    printf("%p\n", s1);
    printf("%p\n", s2);

    /* s1++: ERRO. N�o podemos incrementar uma constante  */
    s2++; /* OK */

    printf("%s\n", s2); /* Imprime: sauda��es */
    system("PAUSE");
    return 0;
}
