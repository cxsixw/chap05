/* ���ϸ�: assignment03.c
 * ����: �Ž������� �Է¹޾� �� �ݾ� ������ ����� ���� ������ ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.21
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // �Ž������� ����Ͽ� �� ȭ�� �������� �ʿ��� ���� ���
void calculateChange(int amount)
{
    // ȭ�� ���� �迭 (����: ��)
    int denominations[] = { 50000, 10000, 5000, 1000, 100, 10 };
    int count, i;

    // 10�� �̸� ����� �ݾ� ���
    printf("�Ž����� (10���̸� ����): %d\n", amount);

    // �� ȭ�� �������� �ʿ��� ��� �Ǵ� ���� ���
    for (i = 0; i < 6; i++) {
        count = amount / denominations[i];   // �ش� ������ ���� �� (�� �Ǵ� ����)
        amount %= denominations[i];           // ������ �ݾ� ���

        // ȭ�� ������ 1000�� �̻��̸� "��" ���, �� �ܿ��� "��" ���
        if (denominations[i] >= 1000)
            printf("%d�� %d��\n", denominations[i], count);
        else
            printf("%d�� %d��\n", denominations[i], count);
    }
}

int main()
{
    int money;

    // �Ž����� �Է�
    printf("�Ž�����? ");
    scanf("%d", &money);

    // 10�� �̸� ����
    money = (money / 10) * 10;

    // �Ž����� ��� �Լ� ȣ��
    calculateChange(money);

    return 0;
}
