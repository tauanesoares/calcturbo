/* calcturbo
criar uma calculadora processo de aritmetica continuo s� com oprera�oes basicas
tem que ter CE=apaga qual est� na tela e C=apaga tudo
ele vai parar a a��o quando apertado o =
tem q fazer dar looping de acordo com as opera�oes q estap rodando
*/
///passalndo o la�o dentro de switch

#include <stdio.h>

 void SOMA(float a, float b){ ///receber valores parametrizados
	float resultado;
	float continuacao; ///variavel
	resultado = (a + b); ///processamento
	printf("=%f", resultado);
}

	void DIMINUIR(float a, float b){ ///receber valores parametrizados
	float resultado; ///variavelvoid
	resultado = (a - b); ///processamento
	printf("=%f", resultado);
}
void SUBTRAIR(float a, float b){
	float resultado;
	resultado = (a / b);
		printf("=%f", resultado);
}
void MULTIPLICAR(float a, float b){
	float resultado;
	resultado = (a * b);
		printf("=%f", resultado);
}

int main()
{
	///declara��o de valores
	float valor1, valor2;
	char op;
	float resultado;
	int loop = 0;
	///declara��o de valores end
	
	printf("\ndigite o valor:\n");
	scanf("%f", &valor1);

while( loop != '='){
	
	
	printf("\nDigite uma operacao: \n");
	scanf("%s", &op);
	
	printf("\ndigite um valor2: \n");
	scanf("%f", &valor2);
			
	switch(op)
	{
   case '+':
   	resultado= (valor1 + valor2);
     SOMA(resultado,valor2); 
   break;
   case '-':
   	resultado= (valor1 - valor2);
     DIMINUIR(resultado,valor2);
   break;
    case '/':
    	resultado = (valor1/valor2);
     SUBTRAIR(resultado,valor2);
   break;
    case '*':
    	resultado= (valor1*valor2);
     MULTIPLICAR(resultado,valor2);
   break;
	case '=':
	printf("= %f",resultado);
	loop == '=';
	break;
	
	valor1= resultado;
	
}


}

	
return 0;
}
