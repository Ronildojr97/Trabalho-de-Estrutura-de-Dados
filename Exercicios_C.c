#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* Feito por Ronildo facanha da cunha jr.
   Matricula: 18308945	
*/
//1
void Time(){
	/*1) Escrever uma fun��o para fazer um programa que transforme  
	segundos em horas, minutos e segundos.
   Ex.: 11030 = 3h 3min 50seg
*/
	int time, horas,minutos,segundos;
	printf("Entre com as horas em segundos:\n");
	  scanf("%d", &time);
	 // horas = (time/3600);
	  //minutos = horas/60;
	  //segundos = minutos/60;
	horas = (time/3600); //resultado da hora
    minutos = (time -(3600*horas))/60;
    segundos = (time -(3600*horas)-(minutos*60));
	printf("%dh : %dm :%ds \n",horas,minutos,segundos);
}

//2
void Produto(){
	/* Escreva uma fun��o que recebe dois n�meros inteiros, positivos, e determine o produto
dos mesmos, utilizando o seguinte m�todo de multiplica��o:
a) dividir sucessivamente o primeiro n�mero por 2 at� que se obtenha 0 como quociente;
b) paralelamente, dobrar, sucessivamente, o segundo n�mero;
c) somar os n�meros da segunda coluna que tenham como correspondente na primeira
    coluna um n�mero �mpar. O total obtido � o produto procurado.
*/
	int num, num2,soma, aux,aux2;
	
	printf("Entre com o valor 1:\n");
	scanf("%d", &num);
	printf("Entre com o valor 2:\n");
	scanf("%d", &num2);
	
	aux = num;
	aux2 = num2;
	
	while (num != 0) {
    if ((num % 2) == 1)
       soma = soma + num2;
    num = num / 2;
    num2 = num2 * 2;
  }
  
  printf("valor da divisao ate 0 sucessivamente de %d = %d\n",aux,num);
  printf("valor do dobro paralelamente de %d = %d\n",aux2,num2);
  printf("Valor da soma = %d\n",soma);
}

//3
void Resto(){
	/*2) Construir uma fun��o que retorne o resto de uma divis�o entre dois n�meros inteiros.
*/
	int num, num2;
	float dv;
	printf("Entre com o valor 1:\n");
	scanf("%d", &num);
	printf("Entre com o valor 2:\n");
	scanf("%d", &num2);
	dv = num%num2;
	printf("Resto da divisao %d por %d = %3.f\n",num,num2,dv);	
}

//4
void IMC(){
	/*Fazer uma fun��o que calcule o IMC*/
	float massa, altura,imc;
	printf("Valor da Massa:\n");
	scanf("%f", &massa);
	
	printf("Valor da Altura:\n");
	scanf("%f", &altura);
	imc = massa/(pow(altura,2));
	printf("IMC =  %.2f\n",imc);
}

//5
void Fatorial(){
	/*Fun��o que calcula o fatorial de um n�mero*/
	int fat=1, n;
	printf("Digite um numero:\n");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		fat*=i;
	}
	printf("\nFatorial de %d = %d\n",n,fat);
}

//6
void PosNeg(){
	/*DesenvolvaumalgoritmoemCquereceba2(dois)n�merosinteiros(umpositivooutro negativo)*/
	int n;
	printf("Digite um numero:\n");
	scanf("%d", &n);
	
	if(n>0){
		printf("POSITIVO\n");
	}else if (n<0){
		printf("NEGATIVO\n");
	}
	else{
		printf("NULO\n");
	}
}

//7
void SizeMat(){	
/*3. Escreva abaixo um algoritmo em que seja poss�vel ao 
usu�rio escolher a dimens�o de uma estrutura/matriz 
(onde o usu�rio define a quantidade de linhas e colunas), 
e em seguida seja exibida esta matriz em tela, 
transcreva o algoritmo para o espa�o abaixo. :*/

	int linha,coluna;
	printf("Entre com o valor 1:\n");
	scanf("%d", &linha);
	printf("Entre com o valor 2:\n");
	scanf("%d", &coluna);
	
	printf("\n##MATRIZ##\n\n");
	for(int i=0;i<linha;i++){
		
		for(int j=0;j<coluna;j++){
			
			printf ("\n		Pos [%d][%d] = %d", i, j,rand() % 20);
		
		}
		 printf("\n");
	}
}

//8
void VetorMinMax(){	/*
Desenvolva Um algoritmo que receba n�meros para preencher um vetor 
(pode ser tam5, use/defina uma constante para isso) e atrav�s de retorno 
de uso de fun��o seja exibido em tela quem � o maior e quem � o menor n�mero 
do vetor. Transcreva abaixo :
*/
	
	//#define TAM 10;
	int TAM = 10;
	int maior,menor;
	int vetor[TAM];	
	
	for(int i=0;i<TAM;i++){
		
		vetor[i] = rand() % 99;	
	
	}
	
	printf("\n##VETOR original##\n\n");
	for(int i=0;i<TAM;i++){
		
		printf(" %d ",vetor[i]);	
	
	}
	
	maior = vetor[0];
	menor = vetor[0];
	for(int i=0;i<TAM;i++){
		
		if(maior<vetor[i]){
			maior = vetor[i];
		}
		
		if(menor>vetor[i]){
			menor = vetor[i];
		}
		
	}
	printf("\n\nMAIOR = %d MENOR = %d\n",maior,menor);	
	
}

// 9
void Operations(){	/*
chamadas e fun��es, as mensagens em tela referente � cada opera��o matem�tica que 
o usu�rio escolher (adi��o, subtra��o etc). Ou seja, ser�o 4 fun��es.:
*/
char get;
printf("Digite a operacao matematica Ex: (+) (-) (/) (*)\n");
scanf("%s",&get);
	
	if(get == '*'){
		printf("Multplicacao\n");
		return;
	}
	else if(get == '/'){
		printf("Divisao\n");
		return;
	}
	else if(get == '+'){
		printf("Adicao\n");
		return;
	}
	else if(get == '-'){
		printf("Subtracao\n");
		return;
	}
	else{
		printf("operacao nao existe\n");
		return;
	}
}

//10

void Operations_2(){	/*
6. Desenvolva um algoritimoque o usu�rio informe dois n�meros 
e que atrav�s de chamada de fun��es seja retornado em tela o seguinte: 
O quadrado destes n�meros
A divis�o entre os n�meros
O resto da divis�o entre os n�meros
E diga se : O resultado da soma entre os n�meros foi uma resposta positiva
ou se foi uma resposta negativa 
*/
float num1,num2,div, resto, soma;
printf("Digite o valor 1\n");
scanf("%f",&num1);
printf("Digite o valor 2\n");
scanf("%f",&num2);
div = num1/num2;
int ax=num1, ax2=num2;
resto = ax%ax2;
printf("O quadrado de %0.f^2 = %0.f\n",num1,num1*num1);
printf("O quadrado de %0.f^2 = %0.f\n",num2,num2*num2);	
printf("Divisao de %0.f/%0.f = %0.3f\n",num1,num2,div);	
printf("Resto de %0.f/%0.f = %0.3f\n",num1,num2,resto);

soma = num1+num2;

	if(soma>0){
		printf("Soma de %0.f + %0.f = %0.1f POSITIVO\n",num1,num2,soma);
	}else{
		printf("Soma de %0.f + %0.f = %0.1f NEGATIVO\n",num1,num2,soma);
	}
}

//11

void VerificarVoto(){
/*
Desenvolva um algoritmo em C que quando o usu�rio informar sua idade,
seu nome e seu n� de titulo em tela, se sua idade for maior que 18 e tem 
idade abaixo de 70 anos, informe mensagem que o usu�rio � obrigat�rio vota��o, 
e SE o usu�rio informar idade menor que for igual a 16 e maior que 70, informe 
em tela que o voto � facultativo.  
*/

int idade, titulo;
printf("Digite sua idade\n");
scanf("%d",&idade);
printf("Digite n. do seu titulo \n");
scanf("%d",&titulo);

	if(idade>=18 && idade<70){
		printf("titulo %d, Votacao obrigatoria\n",titulo);
	
	}else{
	
		printf("titulo %d, Votacao facultativa\n",titulo);
	}
}

//12
void Sistema_de_Verificacao(){
/*
8. Escrever no espa�o o algoritmo para ler e imprimir dois n�meros 
inteiros positivos. Atrav�s de fun��es, demonstre: Atrav�s de fun��es, 
demonstre: -Se o primeiro numero for positivo, imprima o seu quadrado; 
-Se o segundo n�mero for maior que 10 e menor que 100, imprimir a mensagem: 
�N�mero est� entre 10 e 100 �intervalo permitido�; -Se o segundo n�mero for 
menor que o primeiro, calcular e imprimir a diferen�a (um menos o outro) 
entre eles, caso contr�rio, imprimir o primeiro n�mero adicionado de 1 .  
*/

int n1, n2;
printf("Digite valor 1\n");
scanf("%d",&n1);
printf("Digite valor 2\n");
scanf("%d",&n2);

	printf("\nResultado:\n");
	if(n1>0){
		printf("numero %d positivo, %d^2 = %d\n",n1,n1,n1*n1);
	}

	if(n2>=10 && n2<=100){
		printf("%numero d esta entre 10 e 100, intervalo permitido\n",n2);
	}
	
	if(n2<n1){
		printf("%d>%d Diferenca = %d\n",n2,n1,n2-n1);
	}else{
		printf("Adicionado %d + 1 = %d\n",n1,n1+1);
	}
}

// MAIN
int main()
{	  
	int input = 0;	
	
	do{		
		printf("-----------MENU----------\n");
		printf("|01. Converter Segundos	|\n");
		printf("|02. Resto da Divisao	|\n");
		printf("|03. Calcular IMC	|\n");
		printf("|04. Calcular FATORIAL	|\n");
		printf("|05. Calcular PRODUTO	|\n");
		printf("|06. POSITIVO E NEGATIVO|\n");
		printf("|07. Criar MATRIS	|\n");
		printf("|08. VETOR / Min Max	|\n");
		printf("|09. Operations Math	|\n");
		printf("|10. Operacoes 2 valores|\n");
		printf("|11. Voto facultativo	|\n");
		printf("|12. Sis. Ver. Numerico |\n");
		printf("|0. Sair		|\n");
		printf("-------------------------\n");
	  	
		scanf("%d", &input);
	  
	switch(input)
	  {
	  	case 0:
		  	system("cls");
			printf("-------------------\n");
	  		printf("|Saindo...     		 |\n");
	  		printf("-------------------\n"); 
		  	input = 0;
			//system("pause");
			exit(1);
		  	system("cls");
		  
	  			break;
	  	case 1:
	  		system("cls");
	  		printf("-------------------\n");
	  		printf("|Converter Segundos|\n");
	  		printf("-------------------\n");
	  		Time();
	  		system("pause");
	  		system("cls");
				break;
		case 2:
			system("cls");
			printf("-------------------\n");
	  		printf("|Resto da Divisao |\n");
	  		printf("-------------------\n");
			Resto();
			system("pause");
			system("cls");
				break;
		case 3:
			system("cls");
			printf("-------------------\n");
	  		printf("|Calcular IMC	  |\n");
	  		printf("-------------------\n");
			IMC();
			system("pause");
			system("cls");
				break;		
		case 4:
			system("cls");
			printf("-------------------\n");
	  		printf("|Calcular FATORIAL |\n");
	  		printf("-------------------\n");
			Fatorial();
			system("pause");
			system("cls");
				break;			
		case 5:
			system("cls");
			printf("-------------------\n");
	  		printf("|Calcular PRODUTO  |\n");
	  		printf("-------------------\n");
			Produto();
			system("pause");
			system("cls");
				break;
		case 6:
			system("cls");
			printf("-------------------\n");
	  		printf("|POSITIVO E NEGATIVO|\n");
	  		printf("-------------------\n");
			PosNeg();
			system("pause");
			system("cls");
				break;		
		case 7:
			system("cls");
			printf("-------------------\n");
	  		printf("|Crie uma MATRiS	  |\n");
	  		printf("-------------------\n");
			SizeMat();
			system("pause");
			system("cls");
				break;	
		case 8:
			system("cls");
			printf("-------------------\n");
	  		printf("|VETOR	            |\n");
	  		printf("-------------------\n");
			VetorMinMax();
			system("pause");
			system("cls");
				break;			
		case 9:
			system("cls");
			printf("-------------------\n");
	  		printf("Operations Math	|\n");
	  		printf("-------------------\n");
			Operations();
			system("pause");
			system("cls");
				break;		
		case 10:
			system("cls");
			printf("-------------------\n");
	  		printf("Operations 2	  |\n");
	  		printf("-------------------\n");
			Operations_2();
			system("pause");
			system("cls");
				break;			
		case 11:
			system("cls");
			printf("--------------------------\n");
	  		printf("Verificar voto facultativo|\n");
	  		printf("--------------------------\n");
			VerificarVoto();
			system("pause");
			system("cls");
				break;		
		case 12:
			system("cls");
			printf("--------------------------\n");
	  		printf("Sis. Ver. Numerico	|\n");
	  		printf("--------------------------\n");
			Sistema_de_Verificacao();
			system("pause");
			system("cls");
				break;														
				
		default:
		printf("Valor invalido");
		system("pause");
		system("cls");	
	  }
	}while(input!=0);
}
