#include <stdio.h>
#include <Windows.h>

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, min, max;

	printf("������� ������ ����� = ");
	scanf_s("%d", &a);

	printf("������� ������ ����� = ");
	scanf_s("%d", &b);

	if (a < b) {
		min = a;
		max = b;
	}

	else {
		min = b;
		max = a;
	}

	printf("������� ����� = %d\n", max);
	printf("������� ����� = %d\n", min);

}

void main1() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c;
	int max;

	printf("������� 3 ����� = ");
	scanf_s("%d%d%d", &a, &b, &c);

	max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}

	printf("������������ ����� = %d", max);

}

void main2() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;

	printf("����������� = ");
	scanf_s("%d", &a);

	if (a < 18) {
		printf("�������");

	}
	else if ((18 <= a) && (a < 22)){
		printf("���������");
	}

	else if ((22 <= a) && (a < 26)){
		printf("�����");
	}
	else {
		printf("�����");
	}
}

void main3() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c, d, e;
	int max;

	printf("������� 5 �����:");
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

//������ � ��������� � ������
void main4() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	printf("����������� � ���������� � ������ = ");
	scanf_s("%d", &a);

	if (a < 0) {
		printf("�����");
	}
	if ((0 <= a) && (a < 10)){
		printf("�������");
	}
	if ((10 <= a) && (a < 20)) {
		printf("�����");
	}
	else {
		printf("�����");
	}
}

//��������� ������ � �����
void main5() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	printf("��������� ������ � ����� �� ����� � RUB = ");
	scanf_s("%d", &a);

	if (a < 1500) {
		printf("������");
	}
	if ((1500 <= a) && (a < 4000)) {
		printf("���������");
	}
	if ((4000 <= a) && (a < 10000)) {
		printf("������");
	}
	else {
		printf("���� ������");
	}
}

//����� ������� 100 ������
void main6() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	printf("����� ������� 100 ������ � �. = ");
	scanf_s("%d", &a);

	if (a < 10) {
		printf("���������");
	}
	if ((10 <= a) && (a < 12)) {
		printf("����� ������");
	}
	if ((12 <= a) && (a < 15)) {
		printf("������");
	}
	if ((15 <= a) && (a < 18)) {
		printf("���������");
	}
	if ((18 <= a) && (a < 20)) {
		printf("��������");
	}
	else {
		printf("����� ��������");
	}
}