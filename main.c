#include <stdio.h>
#include "lista.h"

int main(void) {
  Lista_1* l_1;
  Lista_2* l_2;

  l_1 = criar_lista_1();
  l_2 = criar_lista_2();

  add_lista_1(l_1,'M');
  add_lista_1(l_1,'I');
  add_lista_1(l_1,'N');
  add_lista_1(l_1,'H');
  add_lista_1(l_1,'A');
  
  add_lista_2(l_2,'l');
  add_lista_2(l_2,'i');
  add_lista_2(l_2,'s');
  add_lista_2(l_2,'t');
  add_lista_2(l_2,'a');
 
  imprimir_lista(l_1,l_2);

  return 0;
}