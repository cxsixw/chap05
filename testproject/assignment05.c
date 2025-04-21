/* ���ϸ�: assignment05.c
 * ����: �µ��� �Է¹޾� ���� �µ��� ȭ�� �µ���, ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.21
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // ���� �µ��� ȭ�� �µ��� ��ȯ�ϴ� �Լ�
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� �Լ�
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    double temperature;
    char scale;

    // �µ� �Է� �ޱ�
    printf("�µ�? ");
    scanf("%lf %c", &temperature, &scale);

    // �Էµ� �µ��� ���� ��ȯ �� ���
    if (scale == 'C' || scale == 'c') {
        double fahrenheit = celsiusToFahrenheit(temperature);
        printf("%.2f C ==> %.2f F\n", temperature, fahrenheit);
    }
    else if (scale == 'F' || scale == 'f') {
        double celsius = fahrenheitToCelsius(temperature);
        printf("%.2f F ==> %.2f C\n", temperature, celsius);
    }
    else {
        printf("�߸��� �Է��Դϴ�.\n");
    }

    return 0;
}
