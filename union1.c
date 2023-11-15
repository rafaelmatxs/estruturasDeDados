/* union1.c */
/* Mostra o uso de uniões */
#include <string.h> /* Para strcpy() */
union Numero
{
    char str[30];
    int i;
    float f;
};

union Numero x; /* Cria variável */

enum DataType
{
    StrType, IntType, FloatType
} Tipo; /* Cria variável */

void StrTipo(char n[])
{
    Tipo=StrType;
    strcpy(x.str, n);
}

void FloatTipo(float n)
{
    Tipo=FloatType;
    x.f=n;
}

void IntTipo(int n)
{
    Tipo=IntType;
    x.i=n;
}

void Print()
{
    switch(Tipo)
    {
        case StrType:
            printf("Str = %s\n", x.str);
            break;
        case IntType:
            printf("Int = %d\n", x.i);
            break;
        case FloatType:
            printf("Float = %.2f\n", x.f);
            break;
    }
}

int union1()
{
    float y = 34.56;
    int z = 345;

    StrTipo("VVB-Treinamento de Pessoal");
    Print();
    IntTipo(z);
    Print();
    FloatTipo(y);
    Print();

    system("PAUSE");
    return 0;
}
