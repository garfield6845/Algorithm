#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void sum(int *a,int *b,int *c){
    *c=*a+*b;
}

int main(){
    int a=1,b=3,c=0;
    int *ptrA=&a;
    int *ptrB=&b;
    int *ptrC=&c;
    sum(ptrA,ptrB,ptrC);
    printf("%d\n",c);
}


//저장하고 gcc (파일 이름) 하고 ./a.out 하기  