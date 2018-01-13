#include <stdio.h>
#include <stdlib.h>

int Conf(int resp){
	
	while( resp < 1 || resp > 2 ){
		printf("Voce informou os valores incorretos, Digite: \n1 - Sim\n2 - Nao\n");
		scanf("%d",&resp);
	} return resp;
	
};

int Abaixo(int sexo, double p, double IMC, double maior, double menor) {
		
		int resp;
		
		if( sexo == 1 ) printf("Voce esta muito abaixo do peso. Voce teria que ganhar: %.2lf Kg\n", maior-p);
		else printf("Voce esta muito abaixo do peso. Voce teria que ganhar: %.2lf Kg\n", menor-p);			
		printf("Deseja utilizar o personal bot?\n Digite 1 para sim\n Digite 2 para nao\nresposta: ");
		scanf("%d",&resp);	
		if (Conf(resp) == 2) printf("Obrigado por usar o personal bot!! :-)\n");
		return resp;
				
}

int Acima(int sexo, double p, double IMC, double maior, double menor){
		
		int resp2;
		
		if( sexo == 1 ){
			printf("Voce esta acima do peso. Voce teria que perder: %.2lf Kg\n",p - maior);
			printf("Deseja utilizar o personal bot?\n1 - Sim\n2 - Nao\nresposta: ");
			scanf("%d",&resp2);
			if (Conf(resp2) == 1) printf("Ok. Vamos orienta-lo sobre como iniciar o personal bot\n");
			else if ( Conf(resp2) == 2) printf("Obrigado por usar o personal bot!! :-)\n"); 
		} else {
			printf("Voce esta acima do peso. Voce teria que perder: %.2lf Kg\n",p - menor);
			printf("Deseja utilizar o personal bot?\n1 - Sim\n2 - Nao\nResposta: ");
			scanf("%d",&resp2);
			if (Conf(resp2) == 1) printf("Ok. Vamos orienta-lo a direcao.\n");
			else if (Conf(resp2) == 2) printf("Obrigado por usar o personal bot!! :-)\n");
		};
		return resp2;
};	

int Conselho(double IMC){
		
		int resp3;
		
		if (IMC < 18.5){
			printf("Recomendamos a voce que faça exercicios para fortalecimento dos musculos e procure analisar sua alimentacao. Parece que voce nao esta consumindo a quantidade de calorias necessarias. Certo?\n");
			printf("Digite: \n 1 - Sim\n 2 - Nao\n");
			scanf("%d",&resp3);
			if (Conf(resp3) == 1){
				printf("Voce devera procurar um medico.E devera fazer exames para confirmar se existem outros problemas como tireoide ou ate mesmo psicologicos.");
				printf("Obrigado por utilizar o personal bot!!\n");
			} else if (Conf(resp3) == 2) printf("Se voce esta sofrendo de algum disturbio alimentar eh necessario verificar as razoes para o problema. Stress, ansiedade, preocupacao podem ser alguns dos sintomas.O mais indicado é procurar um especialista\nObrigado por usar o personal bot\n");			
		} else if (IMC > 25){
			printf("Recomendamos a voce que faca exercicios aerobicos como caminhada, corrida e procure analisar sua alimentacao se voce anda ingerindo frituras ou gordura demais.\n"); 
			printf("Voce anda se alimentando mal?\n1 - Sim\n2 - Nao\n");
			scanf("%d",&resp3);
			if (Conf(resp3) == 1){
				printf("Voce devera procurar um medico e devera fazer exames para confirmar se existem outros problemas de tireoide, ou se algum medicamento está afetando sua absorcao dos alimentos.\n");
				printf("Obrigado por utilizar o personal bot!!\n");
			} else if (Conf(resp3) == 2){
				printf("Stress, ansiedade, preocupacao podem resultar em maior consumo de alimentos./nNeste caso eh preciso fazer um acompanhamento medico e o recomendado é ter o acompanhamento do nutricionista\n");
				printf("Obrigado por utilizar o personal bot!!\n");
			};
		};
	return 0;				
	};
	
int Imc(double IMC,int sexo, double p, double a, double maior, double menor){
			
			int resp;
			
			if ( IMC < 17 ) {
				if (Abaixo(sexo,p,a,maior,menor) == 1) Conselho(IMC);
			} else if ( IMC < 18.5 ) {
				if (Abaixo(sexo,p,a,maior,menor) == 1) Conselho(IMC);		
			} else if ( IMC < 25 ) {
				printf("Voce esta dentro do peso ideal!!! Parabens!!!\nDeseja utilizar o Personal Bot?\n Digite 1 para sim\n Digite 2 para nao\nresposta: ");
				scanf("%d",&resp);
					if (Conf(resp) == 2) printf("Obrigado por usar o personal bot!! :-)");
					else if(Conf(resp) == 1); 
			} else if( IMC < 30 ) {			
				if (Acima(sexo,p,a,maior,menor) == 1) Conselho(IMC);
			} else if( IMC < 35 ) {
				if (Acima(sexo,p,a,maior,menor) == 1) Conselho(IMC);
			} else if( IMC < 40 ) {
				if (Acima(sexo,p,a,maior,menor) == 1) Conselho(IMC);
			} else {
				if (Acima(sexo,p,a,maior,menor) == 1) Conselho(IMC);
			};

	};


