/* matriz.c */
/* Imprime os elementos de uma matriz */

int matriz()
{
    static int M[5]={92,81,70,69,58};
    int i;
    for(i=0; i<5 ;i++)
        printf("%d\n", M[i]); /* Notação matriz */

    system("PAUSE");
    return 0;
}
