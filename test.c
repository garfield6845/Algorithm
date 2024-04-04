#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
    char arr[10];
    char arr2[10]="123456789";
    scanf("%s",arr);
    printf("%lld\n",arr);
    printf("%lld\n",arr2);
    printf("%s\n",arr);
    printf("%s\n",arr2);
    for(int i=0;i<10;i++)
        printf("%c",arr[i]);
}


//저장하고 gcc (파일 이름) 하고 ./a.out 하기  