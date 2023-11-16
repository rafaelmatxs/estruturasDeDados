/* pmatriz.c */
/* Imprime os elementos de uma matriz usando notação ponteiro */

int pmatriz()
{
    static int M[5]={92,81,70,69,58};
    int i;
    for(i=0; i<5 ; i++)
        printf("%d\n", *(M + i));

    system("PAUSE");
    return 0;
}
