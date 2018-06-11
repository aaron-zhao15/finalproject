#include <stdio.h>
#include "bodyFatPercentCalc.h"

int main(int argc, char* argv[]) {

  if (argc != 6) {
    printf("%s : Error, incorrect number of arguments\n", argv[0]);
  }

  float weight, waist, wrist, hip, forearm;

  int check;

  check = sscanf(argv[1], "%f", &weight);
  if (check != 1)
  {
    printf("The weight you entered is not a number, please enter a valid number.\n");
    return 1;
  }

  check = sscanf(argv[2], "%f", &waist);
  if (check != 1)
  {
    printf("The waistline measurement you entered is not a number, please enter a valid number.\n");
    return 1;
  }

  check = sscanf(argv[3], "%f", &wrist);
  if (check != 1)
  {
    printf("The wrist measurement you entered is not a number, please enter a valid number.\n");
    return 1;
  }

  check = sscanf(argv[4], "%f", &hip);
  if (check != 1)
  {
    printf("The hip measurement you entered is not a number, please enter a valid number.\n");
    return 1;
  }

  check = sscanf(argv[5], "%f", &forearm);
  if (check != 1)
  {
    printf("The forearm measurement you entered is not a number, please enter a valid number.\n");
    return 1;
  }


  float bfpMale = calculateBFPMale(weight, waist);
  float bfpFemale = calculateBFPFemale(weight, waist, wrist, hip, forearm);
/*
  char maleStatus[256];
  char femaleStatus[256];

    if (bfpMale <= 5) {
      strcat(maleStatus, "only with essential fat");
    }
    else if (bfpMale <= 13) {
      strcat(maleStatus, "Athletic");
    }
    else if (bfpMale <= 17) {
      strcat(maleStatus, "Fit");
    }
    else if (bfpMale <= 24) {
      strcat(maleStatus, "Average");
    }
    else {
      strcat(maleStatus, "Obese");
    }

    if (bfpFemale <= 13) {
      strcat(femaleStatus, "only with essential fat");
    }
    else if (bfpFemale <= 20) {
      strcat(femaleStatus, "Athletic");
    }
    else if (bfpFemale <= 24) {
     strcat(femaleStatus, "Fit");
    }
    else if (bfpFemale <= 31) {
      strcat(femaleStatus, "Average");
    }
    else {
      strcat(femaleStatus, "Obese");
    }
*/
    printf("If you are male, your body fat percentage is: %f\n", bfpMale);
//    printf("You are %s\n", maleStatus);
    printf("If you are female, your body fat percentage is: %f\n", bfpFemale);
//    printf("You are %s\n", femaleStatus);


}


