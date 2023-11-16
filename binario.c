/* binario.c */
/* Mostra uni�o com estrutura */
/* Imprime um caractere em bin�rio */

typedef struct
{
    /* Cada membro com um bit de tamanho */
    unsigned char bit0: 1; /* bit 0 */
    unsigned char bit1: 1; /* bit 1 */
    unsigned char bit2: 1; /* bit 2 */
    unsigned char bit3: 1; /* bit 3 */
    unsigned char bit4: 1; /* bit 4 */
    unsigned char bit5: 1; /* bit 5 */
    unsigned char bit6: 1; /* bit 6 */
    unsigned char bit7: 1; /* bit 7 */
} Bits;

typedef union
{
    unsigned char ch;
    Bits x;
} Binario;

int binario(void)
{
    Binario B;
    printf("Digite um caractere: ");
    B.ch = getchar();
    printf("O caractere digitado e: %c\n", B.ch);
    printf("O valor em bin�rio correspondente �: ");

    printf("%d", B.x.bit7);
    printf("%d", B.x.bit6);
    printf("%d", B.x.bit5);
    printf("%d", B.x.bit4);
    printf("%d", B.x.bit3);
    printf("%d", B.x.bit2);
    printf("%d", B.x.bit1);
    printf("%d", B.x.bit0);
    printf("\n");

    system("PAUSE");
    return 0;
}
