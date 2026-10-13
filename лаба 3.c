#include <stdio.h> 
#include <locale.h>
#define D 2.54
#define P 2.32166
int main() {
	setlocale(LC_CTYPE, "RUS");
	z1();
	z2();
	z3();
	return 0;
}
int z1() {
	int A, B;
	puts("Введите число А и В: ");
	scanf("%d %d", &A, &B);
	printf("Введено число A: % d\n", A);
	printf("Введено число B: % d\n", B);
	printf("Сумма чисел равна: %d\n", A + B);
	printf("Разность чисел равна: %d\n", A - B);
	printf("Произведение чисел равно: %d\n", A * B);
	printf("Частное чисел равно: %.1f\n", (float)A / B);
	printf("Остаток от деления второго числа на первое равно: %d\n\n", B % A);
	return 0;
}

int z2() {
	int dym, pul; 
	float result_1, result_2;
	printf("Введите значение для расчета: \n");
	scanf("%d %d", &dym, &pul);
	result_1 = D * dym;
	result_2 = P * pul;
	printf("%d дюймов - это %-5.1f см\n", dym, result_1);
	printf("%d пульгад - это %-5.1f см\n\n", pul, result_2);
	return 0;

int z3() {
	float a, b;
	printf("Введите первое число: \n");
	scanf("%f", &a);
	printf("Введите второе число: \n");
	scanf("%f", &b);
	char ymn = ' * ';
	char plus = '+';
	char minus = '-';
	printf("------------------------------------------------\n");
	printf("|   %-10s|      %-10s|      %-10s| \n", "a*b", "a+b", "a-b");
	printf("------------------------------------------------\n");
	printf("|%6.0f%-1c%-6.Of", a, ymn, b);
	printf("|%6.0f%-1c%-6.Of", a, plus, b);
	printf("|%6.0f%-1c%-6.0f|\n", a, minus, b);
	printf("------------------------------------------------\n");
	printf("| %8.0f%-5s|%8.0f%-5s|%8.0f%-5s|\n", a * b, "", a + b, "", a - b, "");
	printf("------------------------------------------------\n");
	return 0;
}