#include <stdio.h>

int main(void) {
  int number = 8128;
  int numberList[10000];
  int arrayPosition = 0;
  int total = 0;
  int i;

  
  for (i = 1; i < number; i++) {
    if (number % i == 0) {
      numberList[arrayPosition] = i;
      total += i;
      arrayPosition++;
    }
  }


  if (total == number) {
    printf("Input: %d\n\nPerfect Number.", number);
  }
  else {
    printf("Input: %d\n\nNot A Perfect Number.", number);
  }
    
  return 0;
}