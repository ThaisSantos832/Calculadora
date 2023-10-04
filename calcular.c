#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int n1;
     int n2;
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
     scanf("%d", &n1);
     printf("Digite o 2 numero: ");
     scanf("%d", &n2);
  
  switch(operacao){
                   
		case 1:		
			total = n1 - n2;
			printf("%d - %d = %d",n1,n2,total);
    		break;
    		
		case 2:
			
			total = n1 + n2;
			printf("%d + %d = %d",n1,n2,total);
    		break;
    		
		case 3:
			
			total = n1 * n2;
			printf("%d * %d = %d",n1,n2,total);
			break;
			
		case 4:
			
			total = n1 / n2;
			printf("%d / %d = %d",n1,n2,total);
			break;
		
		default:
            prinft("Operação invalida");
            break;
  }     
                  
  
  system("PAUSE");	
  return 0;
}
