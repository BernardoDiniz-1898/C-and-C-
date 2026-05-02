#include <stdio.h>
#include <stdlib.h>

int helloname() {
  char nome[15];
  printf("Insira seu nome completo: ");
  scanf("%s", nome);
  printf("Hello World %s!", nome);
  return 0;
}

int main() {
  printf("Hello World!\n\n");
  printf(
      "Gostaria que seu seja nome printado na tela com um 'Hello World'ao lado?"
      "(s/n)\n");
  char descisao;
  printf("-> ");
  scanf("%c", &descisao);

  if (descisao == 's') {
    system("clear");
    helloname();
  }
  return 0;
}
