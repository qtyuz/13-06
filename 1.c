#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    struct Pessoa pessoa;

    printf("Digite o nome: ");
    fgets(pessoa.nome, 50, stdin);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite o endereco: ");
    getchar(); 
    fgets(pessoa.endereco, 100, stdin);

    printf("\nDados da pessoa:\n");
    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s", pessoa.endereco);

    return 0;
}
