#include <stdio.h>
#include <math.h>

#include <Windows.h>

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h = 35.0;
	float g = 9.8;
	float t = sqrt(2 * h / g);

	printf("������� ������ � ������ %f ������\n", h);
	printf("�� �������� ����� ����� %f ������\n", t);

}


void main1() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h;
	printf("������� ������ � ������=");
	scanf_s("%f", &h);

	float g = 9.8;
	float t = sqrt(2 * h / g);

	printf("������� ������ � ������ %f ������\n", h);
	printf("�� �������� ����� ����� %f ������\n", t);

}


void main2() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m;
	int pr_m;

	printf("������� ������� �������� m*m=");
	scanf_s("%f", &m);

	printf("������� ��������� ������ ����������� �����=");
	scanf_s("%d", &pr_m);

	float price = m * pr_m;

	printf("�������� �������� %f m*m �� ���� %d RUB/(m*m) ����� <%10.1f> RUB\n", m, pr_m, price);

}

void main3() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m;
	int pr_m;
	float s;

	printf("������� ������� �������� m*m=");
	scanf_s("%f", &m);

	printf("������� ��������� ������ ����������� �����=");
	scanf_s("%d", &pr_m);

	printf("������� �������� � ����� � ���=");
	scanf_s("%f", &s);

	float price = m * pr_m;

	float mnth = price / (s * 0.5);

	printf("��� ������� �������� ���������� %f ������ ����������� %f �������", price, mnth);

}


//���������� ���������� �������� ���� ����������� ��������������
void main4() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	printf("������� ����� ������ ����������� ��������������=");
	scanf_s("%d", &n);

	float angle = (180 * (n - 2)) / n;
	printf("���� ����������� ��������������=%f", angle);
}


//���������� ����������� �����
void main5() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int c = 300000;
	float v;
	printf("������� �������� ����� � ������������ �����=");
	scanf_s("%f", &v);

	float n = c / v;
	printf("���������� �����������=%f", n);
}


//������� ������� ��������
void main6() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float s;
	printf("�������� ��������=");
	scanf_s("%f", &s);

	float s_y = s * 12;
	printf("������� ��������=%f", s_y);

}