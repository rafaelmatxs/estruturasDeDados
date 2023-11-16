/* pmatriz2.c */
/* Imprime os elementos de uma matriz usando ponteiro variável */

int pmatriz2()
{
    static int M[5]={92,81,70,69,58};
    int i, *p = M; /* Cria e inicializa o ponteiro variável */

    for(i=0; i<5 ; i++)
        printf("%d\n", *(p++)); /* Notação ponteiro */

    system("PAUSE");
    return 0;
}
