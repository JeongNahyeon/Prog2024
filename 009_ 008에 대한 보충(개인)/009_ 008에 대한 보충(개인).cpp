﻿

#include <stdio.h>

int main()
{
    // %d : 정수출력 (1, 2, 3, 0, -1, -2) 
    printf("%d + %d = %d\n", 2, 3, 5);

    // %f : 실수출력 (3.14, -2.0)
    printf("%f\n", 3.14);
    printf("%.2f\n", 3.141592); // 소수점 둘째자리까지만 반올림해서 출력

    // %g : 실수출력 (지수 형태로도 출력)
    printf("%g\n", 3.141592);
    printf("%.3g\n", 65454551.564561565);

    // %c : 문자 출력 (알파벳, 숫자, 몇몇 기호, \n) - 한글, 한자, 유니코드X
    printf("%c %c %c\n", 'a', 'b', 'c');

    // %s : 문자열 출력 (문자들이 열거) - 한글o
    printf("%s\n", "안녕하세요");
}
