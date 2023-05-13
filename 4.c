#include <stdio.h>
#include <stdlib.h>

#define TAM 10

struct aluno {
    char nome[50];
    int matricula;
    float mediaFinal;
};

int main() {
    struct aluno alunos[TAM]; 
    struct aluno aprovados[TAM]; 
    struct aluno reprovados[TAM]; 
    int i, j = 0, k = 0; 

    for (i = 0; i < TAM; i++) {
        printf("Aluno %d\n", i+1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Media final: ");
        scanf("%f", &alunos[i].mediaFinal);
        printf("\n");
    }
    for (i = 0; i < TAM; i++) {
        if (alunos[i].mediaFinal >= 5.0) {
            aprovados[j] = alunos[i];
            j++;
        } else {
            reprovados[k] = alunos[i];
            k++;
        }
    }
    printf("Alunos Aprovados:\n");
    for (i = 0; i < j; i++) {
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Matricula: %d\n", aprovados[i].matricula);
        printf("Media final: %.2f\n\n", aprovados[i].mediaFinal);
    }
    printf("Alunos Reprovados:\n");
    for (i = 0; i < k; i++) {
        printf("Nome: %s\n", reprovados[i].nome);
        printf("Matricula: %d\n", reprovados[i].matricula);
        printf("Media final: %.2f\n\n", reprovados[i].mediaFinal);
    }

    return 0;
}
