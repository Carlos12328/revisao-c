#include <stdio.h>

int main(){

    double nota1, nota2, media;
    double frequencia, frequenciaIdeal = 75.0;
    int faltas, totalAulas;

    //entrada de dados das notas
    printf("\n\nDigite a nota 1 do aluno: ");
        scanf("%lf",&nota1);

    printf("Digite a nota 2 do aluno: ");
        scanf("%lf",&nota2);
    
    //calculo da média
    media = (nota1 + nota2)/2;

    //entrada de dados de frequencia
    printf("Digite o total de aulas: ");
        scanf("%d", &totalAulas);

    printf("Digite a quantidade de faltas do aluno: ");
        scanf("%d", &faltas);

    frequencia = ((double)(totalAulas - faltas) / totalAulas) * 100;


    if(media > 7 && frequencia > frequenciaIdeal){
        printf("A media do aluno foi %.2lf e frequencia de %.2lf%%, portanto ele esta APROVADO!!\n\n", media, frequencia);
    }else{
        printf("A media do aluno foi %.2lf e frenquencia de %.2lf%% portanto ele esta REPROVADO!!\n\n", media, frequencia);
    }

}