#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3
#define ALE 101

main(){
  int l, c, m[TAM][TAM], div, mod, cont;
  srand(time(NULL));
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      do{
        cont = 0;
        mod = 0;
        m[l][c] = rand() % ALE;
        do{
          cont++;
          div = m[l][c] % cont;
          if(div == 0){
            mod++;
          }
        }while(cont != m[l][c]);
      }while(mod != 2);
    }
  }
  printf("Matriz: \n");
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      if(c < TAM - 1){
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  getchar();
}