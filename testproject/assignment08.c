/* ���ϸ�: assignment08.c
 * ����: ��Ʈ ���� ���� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.21
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int num1, num2, result;
    char operator;

    // ��Ʈ ����� �Է� �ޱ�
    printf("��Ʈ �����? ");
    scanf("%x %c %x", &num1, &operator, &num2);  // �Է��� 16������ ����

    // ���� ����
    switch (operator) {
    case '&':
        result = num1 & num2;
        break;
    case '|':
        result = num1 | num2;
        break;
    case '^':
        result = num1 ^ num2;
        break;
    default:
        printf("�߸��� �������Դϴ�.\n");
        return 1;
    }

    // ��� ���
    printf("%X %c %X = %X\n", num1, operator, num2, result);

    return 0;
}
