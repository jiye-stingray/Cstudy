
#include <stdio.h>

int main() {
    //�ڿ��� A
    int A = 6;
    //����� ����
    int count = 0;
    //�ݺ������� ����� ����
    int i;
    for (i = 1; i <= A; i++) {
        if (A % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        printf("%d�� �Ҽ��Դϴ�.\n", A);
    }
    else {
        printf("%d�� �Ҽ��� �ƴմϴ�.\n", A);
    }
    return 0;
}
