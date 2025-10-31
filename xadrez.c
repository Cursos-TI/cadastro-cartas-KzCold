#include <stdio.h>

int main(){
int T; // torre
  
printf("Movimento da Torre:\n"); // anda pra direita
for(T=1;T<=5;T++){
printf("Direita\n");
}
  
int B=1; // bispo
printf("\nMovimento do Bispo:\n"); // anda em cima e direita
while(B<=5){
printf("Cima, Direita\n");
B++;
}

int R=1; // rainha
printf("\nMovimento da Rainha:\n"); // anda pra esquerda
do{
printf("Esquerda\n");
R++;
}while(R<=8);

return 0;
}
