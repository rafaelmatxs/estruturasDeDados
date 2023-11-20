/* ptrfunc.c */
/* Mostra o uso de ponteiro para função */

void doisbeep(void); /* Protótipo */

int ptrfunc()
{
    void (*pf)(void); /* Ponteiro para função void que recebe void */

    pf = doisbeep; /* Nome da função sem os parenteses */

    (*pf)( ); /* Chama a função */

    system("PAUSE");
    return 0;
}

/* doisbeep() */
/* Toca o alto-falante duas vezes */
void doisbeep(void)
{
    unsigned i;
    printf("\a");
    for(i=0; i < 800000 ;i++); /* Dar um tempo */
    printf("\a");
}
