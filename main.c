#include<stdio.h>
#include<locale.h>

main() {
  setlocale(LC_ALL, "Rus");

	int a, b;

	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	printf("Сумма = %d\n", a + b);
	printf("Деление A/B  = %d\n", a / b);
}
