
//3. Vetores Unidimensionais - O seguinte código não compila, verifique o que falta na
//declaração de tipo e faça o programa compilar corretamente


#include <stdio.h>
int main() {
    int grades[3];
    int average;
    grades[0] = 80;
    grades[1] = 70;
    grades[2] = 90;
    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of the 3 grades is: %d\n", average);
    return 0;
}
