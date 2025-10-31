#include <stdio.h>
int main(){
int K;
  
printf("Movimento da Torre:\n");
for(K=1;K<=5;K++){printf("Direita\n");}
  
int L=1;
printf("\nMovimento do Bispo:\n");
  
while(L<=5){printf("Cima, Direita\n");L++;}
int M=1;
printf("\nMovimento da Rainha:\n");
  
do{printf("Esquerda\n");M++;}while(M<=8);
return 0;
}

