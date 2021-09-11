#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


Lista_1 * criar_lista_1(){ // criar lista
Lista_1* l_1 = malloc(sizeof(Lista_1));
l_1 -> qtd_1 = 0;
l_1 -> inicio = NULL;
return l_1;
}

Lista_2 * criar_lista_2(){
Lista_2* l_2 = malloc(sizeof(Lista_2));
l_2 -> qtd_2 = 0;
l_2 -> fim = NULL;
return l_2;
}

int add_lista_1(Lista_1* l_1, char c){
  caracter_1* atual = malloc(sizeof(caracter_1));

  if(atual == NULL){ // se a lista não tiver nenhum caracter, retornar a -1 
    return -1;
  }

  atual-> c = c;
  atual-> prox_1 = NULL;
  
  if (l_1->inicio == NULL){ // Verificar se a lista tá vazia
    l_1 ->inicio = atual;
  }
   else {
      caracter_1 * ultimo = l_1->inicio; 
      while (ultimo->prox_1 != NULL){ // se alista não tá vazia add no final 
        ultimo = ultimo->prox_1;
      }
      ultimo->prox_1 = atual;
   }

  return 0;
}

int add_lista_2(Lista_2* l_2, char c){
    caracter_2* atual = malloc(sizeof(caracter_2));
  if(atual == NULL){
    return -1;
  }
  atual -> c = c; 
  atual -> prox_2 = NULL;

  if(l_2 -> fim == NULL){
    l_2->fim = atual;
  }
  
  else {
      caracter_2 * ultimo = l_2->fim;
      while (ultimo->prox_2 != NULL){
        ultimo = ultimo->prox_2;
      }
      ultimo->prox_2 = atual;
   }
  return 0;
}

void imprimir_lista(Lista_1* l_1, Lista_2* l_2){
caracter_1* atual_1 = l_1 -> inicio;
caracter_2* atual_2 = l_2 -> fim;

while(atual_1 && atual_2 != NULL) {// imprimir as duas lista misturadas
  printf("%c%c", atual_1->c, atual_2->c);
  atual_1 = atual_1->prox_1;
  atual_2 = atual_2->prox_2;
 
}
}

