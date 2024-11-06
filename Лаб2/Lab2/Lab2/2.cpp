#include <stdio.h>
#include <math.h>

#include <Windows.h>

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h = 35.0;
	float g = 9.8;
	float t = sqrt(2 * h / g);

	printf("Предмет падает с высоты %f метров\n", h);
	printf("Он коснется земли через %f секунд\n", t);

}


void main1() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h;
	printf("Введите высоту в метрах=");
	scanf_s("%f", &h);

	float g = 9.8;
	float t = sqrt(2 * h / g);

	printf("Предмет падает с высоты %f метров\n", h);
	printf("Он коснется земли через %f секунд\n", t);

}


void main2() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m;
	int pr_m;

	printf("Введите площадь квартиры m*m=");
	scanf_s("%f", &m);

	printf("Введите стоимость одного квадратного метра=");
	scanf_s("%d", &pr_m);

	float price = m * pr_m;

	printf("Квартира площадью %f m*m по цене %d RUB/(m*m) стоит <%10.1f> RUB\n", m, pr_m, price);

}

void main3() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m;
	int pr_m;
	float s;

	printf("Введите площадь квартиры m*m=");
	scanf_s("%f", &m);

	printf("Введите стоимость одного квадратного метра=");
	scanf_s("%d", &pr_m);

	printf("Введите зарплату в месяц в руб=");
	scanf_s("%f", &s);

	float price = m * pr_m;

	float mnth = price / (s * 0.5);

	printf("Для покупки квартиры стоимостью %f рублей потребуется %f месяцев", price, mnth);

}


//Нахождение градусного значения угла правильного многоугольника
void main4() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	printf("Введите число сторон правильного многоугольника=");
	scanf_s("%d", &n);

	float angle = (180 * (n - 2)) / n;
	printf("Угол правильного многоугольника=%f", angle);
}


//показатель преломления света
void main5() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int c = 300000;
	float v;
	printf("Введите скорость света в определенной среде=");
	scanf_s("%f", &v);

	float n = c / v;
	printf("Показатель преломления=%f", n);
}


//рассчет годовой зарплаты
void main6() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float s;
	printf("Месячная зарплата=");
	scanf_s("%f", &s);

	float s_y = s * 12;
	printf("Годовая зарплата=%f", s_y);

}