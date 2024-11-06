#include <stdio.h>
#include <Windows.h>

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, min, max;

	printf("Введите первое число = ");
	scanf_s("%d", &a);

	printf("Введите второе число = ");
	scanf_s("%d", &b);

	if (a < b) {
		min = a;
		max = b;
	}

	else {
		min = b;
		max = a;
	}

	printf("Большее число = %d\n", max);
	printf("Меньшее число = %d\n", min);

}

void main1() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c;
	int max;

	printf("Введите 3 числа = ");
	scanf_s("%d%d%d", &a, &b, &c);

	max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}

	printf("Максимальное число = %d", max);

}

void main2() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;

	printf("Температура = ");
	scanf_s("%d", &a);

	if (a < 18) {
		printf("Холодно");

	}
	else if ((18 <= a) && (a < 22)){
		printf("Прохладно");
	}

	else if ((22 <= a) && (a < 26)){
		printf("Тепло");
	}
	else {
		printf("Жарко");
	}
}

void main3() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c, d, e;
	int max;

	printf("Введите 5 чисел:");
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);

	max = a;

	if (b > max) {
		max = b;

	}
	if (c > max) {
		max = c;
	}
	if (d > max) {
		max = d;
	}
	if (e > max) {
		max = e;
	}
	printf("max = %d", max);
}

//Погода в ульянвске в апреле
void main4() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	printf("Температура в Ульяновске в апреле = ");
	scanf_s("%d", &a);

	if (a < 0) {
		printf("Мороз");
	}
	if ((0 <= a) && (a < 10)){
		printf("Холодно");
	}
	if ((10 <= a) && (a < 20)) {
		printf("Тепло");
	}
	else {
		printf("Жарко");
	}
}

//стоимость номера в отеле
void main5() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	printf("Стоимость номера в отеле за сутки в RUB = ");
	scanf_s("%d", &a);

	if (a < 1500) {
		printf("Дешево");
	}
	if ((1500 <= a) && (a < 4000)) {
		printf("Нормально");
	}
	if ((4000 <= a) && (a < 10000)) {
		printf("Дорого");
	}
	else {
		printf("Ужас дорого");
	}
}

//время пробега 100 метров
void main6() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	printf("Время пробега 100 метров в с. = ");
	scanf_s("%d", &a);

	if (a < 10) {
		printf("Мгновенно");
	}
	if ((10 <= a) && (a < 12)) {
		printf("Очень быстро");
	}
	if ((12 <= a) && (a < 15)) {
		printf("Быстро");
	}
	if ((15 <= a) && (a < 18)) {
		printf("Нормально");
	}
	if ((18 <= a) && (a < 20)) {
		printf("Медленно");
	}
	else {
		printf("Очень медленно");
	}
}