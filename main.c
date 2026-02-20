#include <stdio.h>
#include <math.h>

#include <stdlib.h>

void desmembrar(int algarismo, int array[]) {
    for (int i = 0; i <= 4 ; i++) {
        array[i] = algarismo % 1000;
        algarismo = algarismo / 10;
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
    for (int i = 0; i < 3; i++) {
        printf("%d", tentativaUsuarioArray[i]);
    }

}

