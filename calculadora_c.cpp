 #include<stdio.h>
int main(){
float x, y, resultado;
int op, rep;
rep = 2;		//definindo processo de repeti��o (linhas 5 - 6)
printf("-----------------------------------------------------------\n");
printf("--------------- CALCULADORA DE DOIS VALORES ---------------\n");
printf("-----------------------------------------------------------");
	while(rep > 0){
		
printf ("\n\n\t1 - SOMA\n\t2 - SUBTRACAO\n\t3 - MULTIPLICACAO\n\t4 - DIVISAO"); //registrando a opera��o requerida pelo usuario (8 - 9)
	scanf ("%i", &op);

printf ("\n Primeiro valor: ");
	scanf ("%f", &x);
	
printf (" Segundo valor: ");   //registrando valores requeridos pelo usu�rio (11 - 15)
	scanf ("%f", &y);	

if (y==0){
printf ("\n Resultado %.1f", x);		//consertando o bug da divis�o por zero (17 - 18)
printf ("\n\n------------------------ Proxima operacao ------------------------ ");
}else{


	
switch(op){
	case 1: 
		resultado = x+y;
		break;
		
	case 2:
		resultado = x-y;
		break;
		
	case 3: 
		resultado = x*y;		//calculando (21 - 40)
		break;
		
	case 4: 
		resultado = x/y;
		break;	
		
	default:
		printf("\nDigite uma operacao valida!");
		break;
}

		printf("\n Resultado: %.2f", resultado);		//resultado
		printf("\n\n------------------------ Proxima operacao ------------------------");		
			
		}}}
					

			
			
		
	


