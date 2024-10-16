
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100] = "hello";// 배열을 안쓰면 5가아니라 6이라고 출력됨
    int len = strlen(s);

    printf("배열의 칸수 : %d\n", (int)sizeof(s));
    printf("문자열의 길이 : %d\n", len);

    char s1[] = "hello";
    char s2[100];

    strcpy_s(s2, s1);
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);

    // 문자열 상수를 복사할수있다.
    strcpy_s(s2, "Konyang University");
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);

    char greeting[10] = "Hello, ";
    char name[100];

    printf("이름 입력 : ");
    scanf_s("%s", name, sizeof(name));

    int x = sizeof(greeting) - strlen(greeting) - 1;
    strncat_s(greeting, name, x);
    //strcat_s(greeting, "!");

    printf("%s", greeting);

    //주의할점1 문자배열은 반드시 '\0'로 끝나있어야한다.
    char str[10] = "";
    strcat_s(str, "Hello");
    printf("%s\n", str);

    char str1[] = "sample";
    char str2[] = "simple";

    printf("%d\n", strcmp(str1, str2));


}
