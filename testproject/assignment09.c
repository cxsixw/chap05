/* ���ϸ�: assignmnet09.c
 * ����: �ܹ��� ������ ��꼭 ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.21
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // �Լ� ����
void getInput(int* burger, int* fries, int* cola);
void calculateTotal(int burger, int fries, int cola);

int main() {
    int burger, fries, cola;

    // �Է� �ޱ�
    getInput(&burger, &fries, &cola);

    // ��� �Լ� ȣ��
    calculateTotal(burger, fries, cola);

    return 0;
}

// �Է� �Լ� ����
void getInput(int* burger, int* fries, int* cola) {
    printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");

    printf("�ܹ��� ����? ");
    scanf("%d", burger);
    printf("����Ƣ�� ����? ");
    scanf("%d", fries);
    printf("�ݶ� ����? ");
    scanf("%d", cola);
}

// ��� �Լ� ����
void calculateTotal(int burger, int fries, int cola) {
    // ��Ʈ ���� �� ���� ���� ���
    int setCount = (burger < fries && burger < cola) ? burger : (fries < cola) ? fries : cola;
    int burgerCount = burger - setCount, friesCount = fries - setCount, colaCount = cola - setCount;

    // ���� ���
    int total = setCount * 6500 + burgerCount * 4000 + friesCount * 2000 + colaCount * 1500;

    // ���
    printf("��ǰ��         �ܰ�    ����    �ݾ�\n");
    if (setCount) printf("��Ʈ          6500    %d     %d\n", setCount, setCount * 6500);
    if (burgerCount) printf("�ܹ���      4000     %d     %d\n", burgerCount, burgerCount * 4000);
    if (friesCount) printf("����Ƣ��   2000     %d     %d\n", friesCount, friesCount * 2000);
    if (colaCount) printf("�ݶ�        1500     %d     %d\n", colaCount, colaCount * 1500);
    printf("-----------\n�հ� %d\n", total);
}
