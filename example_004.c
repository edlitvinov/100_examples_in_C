#include <stdio.h>
int main() {
  double num_1, num_2, res;
  printf("Введите два любых числа: \n");
  scanf("%lf %lf", &num_1, &num_2);
  res = num_1 * num_2;
  printf("Умножая %.2lf на %.2lf получаем %.2lf\n", num_1, num_2, res);
  return 0;
}

