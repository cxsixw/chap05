/* ���ϸ�: assignment01.c
 * ����: ���� ��ǥ�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.21
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

 // �Լ� ����
void checkPointInRectangle();

int main()
{
    // �Լ� ȣ��
    checkPointInRectangle();
    return 0;
}

// �Լ� ����
/*
    �Լ���: checkPointInRectangle
    ���: ���簢���� �»������ ���ϴ���, ���� ��ǥ�� �Է¹޾�
           �� ���� ���簢�� ���� ���� �ִ��� �˻��ϴ� �Լ�.
    �Է�: ����
    ��ȯ: ����
*/
void checkPointInRectangle()
{
    int left, top, right, bottom; // ���簢���� �»������ ���ϴ���
    int x, y;  // ���� ��ǥ

    // �»���� �Է� �ȳ�
    printf("���� ������ �»���� (Left, top)?\n");
    scanf("%d %d", &left, &top);

    // ���ϴ��� �Է� �ȳ�
    printf("���� ������ ���ϴ��� (right, bottom)?\n");
    scanf("%d %d", &right, &bottom);

    // ���� ��ǥ �Է� �ȳ�
    printf("���� ��ǥ (x, y)?\n");
    scanf("%d %d", &x, &y);

    // ���� ���簢�� ���� ���� �ִ��� �˻�
    if (x >= left && x <= right && y >= top && y <= bottom)
    {
        printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
    }
    else
    {
        printf("���� ���� ���� ���Դϴ�.\n");
    }
}
