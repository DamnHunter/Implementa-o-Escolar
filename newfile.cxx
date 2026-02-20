#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void desmembrar(int algarismo, int array[]) {
    int razao = 1000;
    for (int i = 0; i <= 4 ; i++) {
        array[i] = algarismo / razao;
        algarismo %= razao;
        razao /= 10;
    }
}

int main() {
    int senha;
    int tentativaUsuario;
    int senhaArray[4];
    int tentativaUsuarioArray[4];
    int signal;
    senha = rand() % 10000;
    printf("Coloque sua primeira tentativa");
    scanf("%d", &tentativaUsuario);
    desmembrar(tentativaUsuario, tentativaUsuarioArray);
    desmembrar(senha, senhaArray);
    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++){
        	if(tentativaUsuarioArray[i] == senhaArray[j]){
        		// Numero e lugar certo
    } else { 
    for (int k = 4; k >= 0; k--){
        if(tentativaUsuarioAreay[i] == senhaArray[k]){
        // Numero certo, lugar errado	        
        } else {
        // Numero errado	
        }
  }