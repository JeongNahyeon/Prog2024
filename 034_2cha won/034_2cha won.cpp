// 034_2cha won.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int arr[4][5] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 }, {11, 12, 13, 14, 15 }, {16, 17, 18, 19, 20} };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%5d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int b[2][3] = { { 2 ,4 ,6 }, { 8, 6, 3 } };
    int c[2][3] = { 1,2,3,4,5,6 };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %3d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %3d ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int t[2][3][4] = { {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}},
        {{13,14,15,16}, {17,18,19,20}, {21,22,23,24}} };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++)
                printf(" %4d ", t[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }
}

