#include <locale.h>

typedef struct sPonto
{
    int dados;
    struct sPonto *proximo;
} Ponto;

typedef struct sListas
{
    Ponto *inicio;
    Ponto *fim;
} Listas;

void criar(Listas *lista)
{
    lista->inicio = NULL;
    lista->fim = NULL;
}

//OPCAO INSERIR 1
void inserir(Listas *lista, int a)
{
    Ponto *novo;
    novo = (Ponto *)malloc(sizeof(Ponto));
    if(novo != NULL)
    {
        novo->dados = a;
        Ponto *atual, *anterior;
        anterior = NULL;
        atual = lista->inicio;
        while(atual != NULL && atual->dados < a)
        {
            anterior = atual;
            atual = atual->proximo;
        }
        novo->proximo = atual;
        if(anterior != NULL)
        {
            anterior->proximo = novo;
        }
        else
        {
            lista->inicio = novo;
        }
    }
    else
    {
        printf("Memória Insuficiente\n");
    }
}

//OPCAO MOSTRAR LISTA 2
void consulta(Listas *lista)
{
    Ponto *p;
    printf("Lista: ");
    for(p = lista->inicio; p != NULL ; p = p->proximo)
    {
        printf("%d ->> ", p->dados);
    }
    printf("NULL\n");
}

//OPCAO ALTERAR ELEMENTO 3
void alterar(Listas *lista, int a, int b)
{
    Ponto *atual, *anterior;
    anterior = NULL;
    atual = lista->inicio;
    while(atual != NULL && atual->dados != a)
    {
        anterior = atual;
        atual = atual->proximo;
    }
    if(anterior != NULL)
    {
        if(atual != NULL)
        {
            atual->dados = b;
            printf("Alterado com sucesso!\n");
        }
        else
        {
            printf("Valor indisponível.\n");
        }
    }
    else
    {
        printf("Lista vazia\n");
    }
}

//OPCAO REMOVER ELEMENTO 4
void remover(Listas *lista, int a)
{
    Ponto *atual, *anterior;
    anterior = NULL;
    atual = lista->inicio;
    while(atual != NULL && atual->dados != a)
    {
        anterior = atual;
        atual = atual->proximo;
    }
    if(anterior != NULL)
    {
        if(atual != NULL)
        {
            anterior->proximo = atual->proximo;
            free(atual);
            printf("Valor Removido\n");
        }
        else
        {
            printf("Valor não encontrado\n");
        }
    }
    else
    {
        printf("Lista vazia\n");
    }
}

//OPCAO SAIR E RESETAR A MEMORIA 5
int vazia(Listas *lista)
{
    return (lista->inicio == NULL);
}

void reset(Listas *lista)
{
    Ponto *auxiliar = lista->inicio;
    if(auxiliar != NULL)
    {
        while(auxiliar != NULL)
        {
            lista->inicio = auxiliar->proximo;
            free(auxiliar);
            auxiliar = lista->inicio;
        }
        printf("Todos os elementos foram removidos!\n");
    }
    else
    {
        printf("Lista vazia.\n");
    }
}

void listasimplesmenteencadeada()
{
    setlocale(LC_ALL, "portuguese");
    Listas listacriada;
    int valor1, op, valor2;
    criar(&listacriada);
    printf("LISTA SIMPLESMENTE ENCADEADA\n");
    while(1)
    {
        printf("\n1- Inserir elemento\n");
        printf("2- Mostrar lista\n");
        printf("3- Alterar elemento da lista\n");
        printf("4- Remover elemento da lista\n");
        printf("5- Sair\n");
        printf("\nDigite o número da opção: ");
        scanf("%d", &op);
        //system("CLS")
        switch(op)
        {
        case 1: //inserir elemento na lista
            printf("Valor:");
            scanf("%d", &valor1);
            inserir(&listacriada, valor1);
            break;
        case 2: //mostrar lista
            if(vazia(&listacriada))
            {
                printf("Lista vazia.\n");
            }
            else
            {
                consulta(&listacriada);
            }
            break;
        case 3: //alterar um elemento da lista
            printf("Valor para ser alterado:");
            scanf("%d", &valor1);
            printf("Novo valor:");
            scanf("%d", &valor2);
            alterar(&listacriada, valor1, valor2);
            break;
        case 4: //remover determinado elemento
            printf("Valor:");
            scanf("%d", &valor1);
            remover(&listacriada, valor1);
            break;
        case 5: //fechar aplicação
            reset(&listacriada);
            exit(0);
        default:
            printf("Opção inválida!\n");
        }
    }
}
