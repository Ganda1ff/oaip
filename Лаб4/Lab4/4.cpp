#include <stdio.h>
#include <Windows.h>


void main() {
    int n;
    int i = 1;

    printf("n = ");
    scanf_s("%d", &n);



    do {
        printf("%d ", 2 * i);
        i++;
    } while (i <= n);
}

void main1() {
    int n, a;
    int i = 0;
    int a1;

    printf("n,a = ");
    scanf_s("%d%d", &n, &a);

    a1 = a;

    do {
        printf("%d ", a1);
        i++;
        a1 += a;
    } while (i < n);
}

//первые n нечетных чисел
void main3() {
    int n;
    int i = 1;
    int count = 0;

    printf("n = ");
    scanf_s("%d", &n);



    do {
        printf("%d ", i);
        i+=2;
        count++;
    } while (count < n);
}