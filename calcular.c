#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
     float n1;
     float n2;
     int operacao;
     float total;
  
     printf("Calculadora");
     printf("Escolha uma das operacoes a seguir: \n" );
     printf("1 para Subtracao \n" );
     printf("2 para Soma \n" );
     printf("3 para Multiplicacao \n" );
     printf("4 para Divisao \n" );
     scanf("%d", &operacao);
  
     printf("Digite o 1 numero: ");
     scanf("%.2f ", &n1);
     printf("Digite o 2 numero: ");
     scanf("%.2f", &n2);
  
  switch(operacao){
                   
		case 1:		
			total = n1 - n2;
			printf("%2.f - %2.f = %2.f",n1,n2,total);
    		break;
    		
		case 2:
			
			total = n1 + n2;
			printf("%.2f + %.2f = %.2f",n1,n2,total);
    		break;
    		
		case 3:
			
			total = n1 * n2;
			printf("%.2f * %.2f = %.2f",n1,n2,total);
			break;
			
		case 4:
			
			total = n1 / n2;
			printf("%.2f / %2.f = %.2f",n1,n2,total);
			break;
		
		default:
            printf("Operação invalida");
            break;
  }     
                  
 
  return 0;
}

