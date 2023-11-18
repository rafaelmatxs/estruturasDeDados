/* strprocura.c */
/* Procura um caractere numa cadeia de caracteres */

char *procura(char *, char); /* Protótipo */

int strprocura()
{
    char str[81], *ptr;

    printf("Digite uma frase:\n");
    gets(str);
    ptr = procura(str, 'h');

    printf("\nA frase comeca no endereco %p\n", str);

    if(ptr)
    {
        printf("\nPrimeira ocorrencia do caractere 'h': %p\n", ptr);
        printf("\nA sua posicao e: %d\n", ptr-str);
    } else
        printf("O caractere 'h' nao existe nessa frase.\n");
    system("PAUSE");
    return 0;
}

/* Procura um caractere numa frase */
char *procura(char *s, char ch)
{
    while(*s != ch && *s != '\0') s++;
    if(*s != '\0') return s;
    return (char *)0;
}
