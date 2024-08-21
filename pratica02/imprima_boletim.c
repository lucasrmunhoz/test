#include <stdio.h>

int main() {

  int matricula = 12345;
  char materia1[] = "A1";
  float grade1 = 85.5;
  char materia2[] = "A2";
  float grade2 = 92.0;
  float media = (grade1 + grade2) / 2;

  
  printf("Matricula:\t%i\t", matricula);
  printf("%s: %.1f\t", materia1, grade1);
  printf("%s: %.1f\t", materia2, grade2);
  printf("Media: %.1f\n", media);


  return 0;
}