// 1. 별표를 n개 출력한다.
// 2. 1부터 n까지 홀수를 출력한다.
// 3. 1부터 n까지 자연수를 모두 더한다. 

#include <stdio.h>

int main()
{// while 문 
    
    int n;
    printf("n을 입력 : ");
    scanf_s("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("*");
        i++;
    }
    printf("\n");
    // do while 문
    i = 1;

    while (i <= n) {
        printf("%d ", i);
        i += 2;
    }
    printf("\n");

    // for 문

    int sum = 0; // 1부터 n까지의 합을 저장할 변수
    i = 1;

    while (i <= n) {
        sum += i; // sum에 각 i를 누적시킴
        i++;
    }
    printf("sum = %d\n", sum);
}

