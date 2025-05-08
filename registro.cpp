#include <stdio.h>
#define MAX 50
#define TAM 20
struct tipoProduto{
    int codigo;
    char nome[MAX+1];
    double preco;
};
void cadastro(int n,tipoProduto vetor[]){
    for(int i=0;i<n;i++){
    printf("DIGITE O CODIGO DO PRODUTO.\n");
    scanf("%d",&vetor->codigo);
    printf("DIGITE O NOME DO SEU PRODUTO.\n");
    scanf(" %[^\n]",vetor->nome);
    printf("DIGITE O PREÇO DO SEU PRODUTO.\n");
    scanf("%lf",&vetor->preco);
    }
}
void listagem(int n, tipoProduto vetor[]){
    for(int i=0;i<n;i++){
        printf("Código: %d, Nome: %s\n",vetor[i].codigo,vetor[i].nome);
    }
}
double consulta(int n,int cod,tipoProduto vetor[]){
    for(int i=0;i<n;i++){
        if (vetor[i].codigo == cod){
            return vetor[i].preco;
        }
    }
    return -1;

}
int main(){
    int n;
    int cod;
    double preco;
    tipoProduto vetor[TAM];
    printf("Quantidade de produtos\n");
    scanf("%d",&n);
    cadastro(n,vetor);
    listagem(n,vetor);

    printf("informe o codigo do produto desejado\n");
    scanf("%d",&cod);
    preco = consulta(n,cod,vetor);
    if (preco != -1){
        printf("Preço: %.2lf",preco);
    }
    else{
        printf("Produto não encontrado!");
    }
}