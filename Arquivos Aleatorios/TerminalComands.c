#include <stdio.h>
#include <stdlib.h>

int escolhercComandosTerminal() {
  printf("Escolha o camando do terminal Linux que deseja usar:\n");

  char cava = system("cava");
  char btop = system("btop");

  return 0;
}

int main() {

  escolhercComandosTerminal();
  return 0;
}
