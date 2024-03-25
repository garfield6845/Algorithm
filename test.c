#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    printf("int 자료형의 크기: %d바이트\n", sizeof(int));
    printf("float 자료형의 크기: %d바이트\n", sizeof(float));
    printf("char 자료형의 크기: %d바이트\n", sizeof(char));
}


//저장하고 gcc (파일 이름) 하고 ./a.out 하기 