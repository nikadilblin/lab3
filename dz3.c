#define g 9.8
#include <locale.h>
#include <stdio.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	float m, h, s; 
	float F, F2;
	printf("ввелите массу в кг\n");
	scanf("%f", &m);
	printf("введите высоту в м\п");
	scanf("8f", &h);
	printf("введите пройденный путь в м\n"); 
	scanf("&f", &s);
	F = m * g * h;
	F2 = F / s;
	printf("сила тяжести при массе %.2f кг, высоте %.2f и пройденому пути %.2f равна %.2f", m, h, s, F2);
}