/* ���ϸ�: assignment02.c
 * ����: ������ ��鿡�� ���� ��ǥ�� �Է¹޾� ��и��� �Ǵ��ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.21
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // �Լ� ����
void checkQuadrant(int x, int y);

int main()
{
    int x, y;

    // ���� ��ǥ �Է�
    printf("���� ��ǥ (x, y)? ");
    scanf("%d %d", &x, &y);

    // ��и� Ȯ�� �Լ� ȣ��
    checkQuadrant(x, y);

    return 0;
}

// �Լ� ����
/*
    �Լ���: checkQuadrant
    ���: �־��� �� (x, y)�� ��ǥ�� �Է¹ް�, �� ���� ���� ��и��� �Ǻ��Ͽ� ���
    �Է�: x, y (���� ��ǥ)
    ��ȯ: ����
*/
void checkQuadrant(int x, int y)
{
    if (x > 0 && y > 0)
        printf("1��и鿡 �ֽ��ϴ�.\n");
    else if (x < 0 && y > 0)
        printf("2��и鿡 �ֽ��ϴ�.\n");
    else if (x < 0 && y < 0)
        printf("3��и鿡 �ֽ��ϴ�.\n");
    else if (x > 0 && y < 0)
        printf("4��и鿡 �ֽ��ϴ�.\n");
    else
        printf("�� ���� �ֽ��ϴ�.\n");  // ����(0, 0) �Ǵ� �� ���� �� ó��
}
