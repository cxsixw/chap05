/* ���ϸ�: assignment17.c
 * ����: ���� �ð��� �Է¹޾� ���� ����� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.21
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // �Լ� ����
void calculateParkingFee(int parkingTime);

int main() {
    int parkingTime;

    // ���� �ð� �Է�
    printf("���� �ð�(��)? ");
    scanf("%d", &parkingTime);

    // ���� ��� ��� �Լ� ȣ��
    calculateParkingFee(parkingTime);

    return 0;
}

// ���� ����� ����ϴ� �Լ�
void calculateParkingFee(int parkingTime) {
    int fee = 2000;  // ���� 30���� 2000��
    int additionalTime = parkingTime - 30;  // �߰��� �ð�
    int additionalFee = 0;

    // 30���� �ʰ��� �ð��� ���� ���
    if (additionalTime > 0) {
        additionalFee = (additionalTime / 10) * 1000;
    }

    // �� ��� ���
    fee += additionalFee;

    // �Ϸ� �ִ� ����� 25000��
    if (fee > 25000) {
        fee = 25000;
    }

    // ���� ��� ���
    printf("���� ���: %d��\n", fee);
}
