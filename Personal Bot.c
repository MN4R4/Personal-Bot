#include<stdio.h>
#include<stdlib.h>
#include "mkn.h"

int main(){
	
	double p, a, IMC, maior, menor;
	int sexo, resp;
	
	printf("Informe qual o seu sexo: \n 1 - Homem \n 2 - Mulher\n");
	scanf("%d",&sexo);
	while(sexo < 1 || sexo > 2){
		printf("Valor incorreto!! Informe novamente qual o seu sexo: \n 1 - Homem \n 2 - Mulher\n");
		scanf("%d",&sexo);
	}
	printf("Ola. Diga seu peso: \nPeso em kg: \n");
	scanf("%lf",&p);
	while(p < 30 || p > 250){
		printf("Valor incorreto!! Informe novamente qual o seu peso novamente: \n");
		scanf("%lf",&p);
	}
	printf("Diga sua altura:\nAltura em metros usando 'ponto' ao inves de virgula \n");
	scanf("%lf",&a);
	while(a < 1 || a > 2.5){
		printf("Valor incorreto!! Informe novamente sua altura: \n");
		scanf("%lf",&a);
	}
	
	IMC = p / (a * a);
	
	menor = (20 * a * a) ;
	maior = (25 * a * a) ;
	
	Imc(IMC,sexo,p, a,maior,menor);
	
	return 0;	
}

