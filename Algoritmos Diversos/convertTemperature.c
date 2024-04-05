#include <stdio.h>
#include <stdlib.h>

double *convertTemperature(double celsius, int *returnSize) {
  *returnSize = 2;

  double *tempConvert = malloc(sizeof(double) * 2);
  tempConvert[0] = celsius + 273.15;
  tempConvert[1] = celsius * 1.80 + 32;

  return tempConvert;
}

int main() {
  int size;
  double *temperatures = convertTemperature(36.50, &size);

  for (int i = 0; i < size; i++)
    printf("%.5lf\n", temperatures[i]);

  return 0;
}