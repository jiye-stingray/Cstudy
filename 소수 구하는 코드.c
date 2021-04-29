
#include <stdio.h>

int main() {
    //자연수 A
    int A = 6;
    //약수의 갯수
    int count = 0;
    //반복문에서 사용할 변수
    int i;
    for (i = 1; i <= A; i++) {
        if (A % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        printf("%d는 소수입니다.\n", A);
    }
    else {
        printf("%d는 소수가 아닙니다.\n", A);
    }
    return 0;
}
