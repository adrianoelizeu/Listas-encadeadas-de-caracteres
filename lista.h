typedef struct lista{
  char c;
  struct lista* prox_1;
}caracter_1;

typedef struct lista2{
  char c;
  struct lista2* prox_2;
}caracter_2;

typedef struct _lista{
  caracter_1* inicio;
  int qtd_1; 
}Lista_1;

typedef struct lista_{
  caracter_2* fim;
  int qtd_2; 
}Lista_2;





Lista_1 * criar_lista_1();

Lista_2 * criar_lista_2();

int add_lista_1(Lista_1* l_1, char c);

int add_lista_2(Lista_2* l_2, char c);

void imprimir_lista();
