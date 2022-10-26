#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
 
 
 int main(){
 	
	 
 	 float roupa, calca, sapato;
 	 float resultado;
 	 int resp;
 	 int i;
 	 roupa = 30.00;
 	 calca = 50.00;
 	 sapato = 35.00;
 	 resultado = 0;
 	 resp = 0;
 	 
 	 do{
 	 	for(i=0;i<2;i++)
		 
 	 	system("cls");
 	  printf("\tMercado Digital\n");
 	  printf("\nRoupa [1] R$ %2.f\n", roupa);
 	  printf("\nCalca [2] R$ %2.f\n", calca);
      printf("\nSapato [3] R$ %2.f\n", sapato);
      printf("\nRepetir [4]\n");
      printf("\n Resposta: ");


      
	   	scanf("%f", &resultado);
	   	resultado == (sapato, calca, roupa);
	   	if(resultado == 1){
	   		do{
			   
	   		printf("\nPreco: %2.f", roupa);
	   		
	   			printf("\nDeseja pagar agora Sim[1] Nao[2] Sair[3] Repetir[4]:: ");

	   		scanf("%i", &resp);
	   		
	   		 if(resp == 1){
	   		 	
	  	printf("\nItem Foi Pago com sucesso\n");
	
	  }
	    if (resp == 2){
	     printf("\nItem nao foi pago\n");
	   }
	    while (resp == 3){
         exit(1);
		}
	     }while(resp == 4);
	  }
	  	if(resultado == 2){
	  		do{
			  
	   		printf("\nPreco: %2.f", calca);
	   			printf("\nDeseja pagar agora Sim[1] Nao[2] Sair[3] Repetir[4]:: ");

	   		scanf("%i", &resp);
	   		
	   		 if(resp == 1){
	   		 	
	  	printf("\nItem Foi Pago com sucesso\n");
	
	  }
	    if (resp == 2){
	     printf("\nItem nao foi pago\n");
	   }
	    while (resp == 3){
         exit(1);
		}
	    
	    }while(resp == 4);
	  }
	  	if(resultado == 3){
	  		do{
			  
	   		printf("\nPreco: %2.f \n", sapato);
	   		system("pause");
	   		
	   			printf("\nDeseja pagar agora Sim[1] Nao[2] Sair[3] Repetir[4]: ");

	   		scanf("%i", &resp);
	   		
	   		 if(resp == 1){
	   		 	
	  	printf("\nItem Foi Pago com sucesso\n");
	
	  }
	    if (resp == 2){
	     printf("\nItem nao foi pago\n");
	   }
	    while (resp == 3){
         exit(1);
		}
	    }while(resp == 4);	
	  }
	 
    }while(resultado == 4);	
 	 
 	return 0;
 	
 	 printf("Mercado Criado Por Feupe Mord Git Hub");
 }

