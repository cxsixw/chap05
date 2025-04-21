/* ���ϸ�: assignment04.c
 * ����: ������ �Է¹޾� �������� �˻��ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.21
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // ������ �Ǵ��ϴ� �Լ�
 /*
     �Լ���: isLeapYear
     ���: �־��� ������ �������� �ƴ��� �Ǵ��Ͽ� ���
     �Է�: year (����)
     ��ȯ: ����
 */
void isLeapYear(int year)
{
    // ���� �Ǵ� ����
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d���� �����Դϴ�.\n", year);  // ������ ���
    else
        printf("%d���� ������ �ƴմϴ�.\n", year);  // ������ �ƴ� ���
}

int main()
{
    int year;

    // ���� �Է¹ޱ�
    printf("����? ");
    scanf("%d", &year);

    // ���� �Ǵ� �Լ� ȣ��
    isLeapYear(year);

    return 0;
}