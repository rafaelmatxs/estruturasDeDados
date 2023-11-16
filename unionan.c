/* unionan.c */
/* Mostra o uso de uniões anônimas */
#include <string.h> /* Para strcpy() */

enum DataType { StrType, IntType, FloatType };

typedef struct
{
    enum DataType Tipo;
    union
    {
        char str_valor[30];
        int int_valor;
        float float_valor;
    };
} UniaoLiteral;

void Print1(UniaoLiteral);

int unionan()
{
    UniaoLiteral A;
    A.Tipo=StrType;
    strcpy(A.str_valor, "VVB-Treinamento de Pessoal");
    Print1(A);
    A.Tipo=FloatType;
    A.float_valor=34.56;
    Print1(A);
    A.Tipo=IntType;
    A.int_valor=345;
    Print1(A);

    system("PAUSE");
    return 0;
}

void Print1(UniaoLiteral x)
{
    switch(x.Tipo)
    {
        case StrType:
            printf("Str = %s\n", x.str_valor);
            break;
        case IntType:
            printf("Int = %d\n", x.int_valor);
            break;
        case FloatType:
            printf("Float = %.2f\n", x.float_valor);
            break;
    }
}
