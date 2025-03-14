/*
	Crie um programa em C que receba os dados de um estudante e
avalie se este estudante é aprovado se ele obtiver nota mínima de 7
e frequência mínima de 75%.

*/

#include<stdio.h>

int main(){
	
	// memórias
	
	float nota; 
	float frequencia;
	
	// printf » informação
	// scanf » leitura da memória e informação
	
	printf("Digite sua nota: \n"); 
	scanf("%f",&nota);
	
	printf("Digite sua frequencia: \n");
	scanf("%f",&frequencia);
	
/*
	&& só é usado quando existe duas afirmativas, (só se torna verdadeira quando as duas estão certas, se não, uma anula a outra),
	nesse exemplo aluno só é aprovado se ele obtiver nota >= 7 e frequência >=75%.
	
	if else » se não for isso é aquilo.
*/
	
	if(nota >= 7 && frequencia >= 75){  
		printf("APROVADO!");
	}else{
		printf("REPROVADO!");
	}
	
return 0;
}
