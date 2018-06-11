#include <stdio.h>
#include "bmiCalc.h"

int main(int argc, char* argv[]) {
    if (argc != 3){
      printf("%s : Incorrect number of arguments, only enter 2\n", argv[0]);
    }

    float weight, height;

    int check;

    check = sscanf(argv[1], "%f", &weight);
    if (check != 1) {
      printf("The weight you entered is not a number, please enter a valid number.\n");
    return 1;
    }

    check = sscanf(argv[2], "%f", &height);
    if (check != 1) {
      printf("The height you entered is not a number, please enter a valid number.\n");
      return 1;
    }

    weight = getWeight(weight);
    height = getHeight(height);
    float bodyMassIndex = calcBMI(weight, height);
    printf("%f\n", bodyMassIndex);

}
