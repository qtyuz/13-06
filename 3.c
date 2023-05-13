#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[50];
    float nota1, nota2, nota3;
} Aluno;

int main() {
    Aluno alunos[5];
    int i, index_maior_nota1, index_maior_media, index_menor_media;
    float maior_nota1 = 0, maior_media = 0, menor_media = 10;

    for (i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota da terceira prova: ");
        scanf("%f", &alunos[i].nota3);
        printf("\n");
    }
    
    for (i = 0; i < 5; i++) {
        if (alunos[i].nota1 > maior_nota1) {
            maior_nota1 = alunos[i].nota1;
            index_maior_nota1 = i;
        }
    }
    printf("Aluno com maior nota na primeira prova: %s\n", alunos[index_maior_nota1].nome);

    for (i = 0; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (media > maior_media) {
            maior_media = media;
            index_maior_media = i;
        }
    }
    printf("Aluno com maior média geral: %s\n", alunos[index_maior_media].nome);
    
    for (i = 0; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (media < menor_media) {
            menor_media = media;
            index_menor_media = i;
        }
    }
    printf("Aluno com menor média geral: %s\n", alunos[index_menor_media].nome);
 
    for (i = 0; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (media >= 7) {
            printf("%s foi aprovado com média %.2f\n", alunos[i].nome, media);
        } else {
            printf("%s foi reprovado com média %.2f\n", alunos[i].nome, media);
        }
    }
    
    return 0;
}
