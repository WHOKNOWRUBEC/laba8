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
	printf("Деление B/A = %d\n", b / a);
	if (a > b) {
		printf("Разность = %d\n", a - b);
	}
	else {
		printf("Разность = %d\n", b - a);
}
