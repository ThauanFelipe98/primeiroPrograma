#include <iostream>
using namespace std;
int main(){
    int contador = 0, idade;
    float soma = 0, media;
    char op;
    do{
       printf("Pressione A para ADICIONAR \n"); 
       printf("Pressione I para IMPRIMIR \n"); 
       printf("Pressione S para SAIR \n");
       scanf(" %c", &op);
       if(op == 'A' || op == 'a'){
           printf("Digite uma idade: ");
           scanf("%d", &idade);
           soma = soma + idade;
           contador ++;
       } else if (op == 'I' || op == 'i'){
           media = soma / contador;
           printf(" Total de idade: %d \n Soma de idade: %f \n Media das idades: %f \n",
                    contador, soma, media);
       } else if (op == 'S' || 's') {
           printf("Saindo do Algoritimo \n");
       } else {
           printf("Opção Inválida!\n");
       } 
    }while (op!='S' && op!='s');
    return 0;
}
