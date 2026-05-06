
//5. Condicional – Crie um programa em C usando condicional para exibir em tela as
//mensagens “Foo é maior que bar” e “Bar é maior que Foo” considerando os valores
//das variáveis abaixo

#include <stdio.h>

int main() {
    int foo = 10;
    int bar = 5;

    if(foo > bar){
        printf("Foo é maior que bar");
    } else {
        printf("Bar é maior que Foo");
    }

    return 0;
}
