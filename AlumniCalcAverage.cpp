#include <stdio.h>
#include <math.h>

// Objetivo: calcular a média aritmética das 10 notas de um aluno
// Desenvolvido por: Henrique Cabral Ferraz

float calcAverage (float grades[]);

int main () {
	float studentGrades[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	char evaluation[][4] = {"PS", "S", "R", "I"};
	
	printf("Calculo de media aritmetica.\n");
	
	printf("Por favor, insira as notas do aluno: \n");
	
	for(int i = 0; i < 10; i++) {
		scanf("%f", &studentGrades[i]);
	}
	
	if(calcAverage(studentGrades) >= 8) {
		printf("%s", evaluation[0]);
	}
	else if(calcAverage(studentGrades) >= 6) {
		printf("%s", evaluation[1]);
	}
	else if(calcAverage(studentGrades) >= 4) {
		printf("%s", evaluation[2]);
	}
	else {
		printf("%s", evaluation[3]);
	}			
	return 0;
}

float calcAverage (float grades[]) {
	float average = 0;
	
	for(int i = 0; i < 10; i++) {
		average = grades[i]/10 + average;
	}
	
	average = ceilf(average * 100) / 100;
	
	return average;
}
