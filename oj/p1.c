#include <stdio.h>
#include <math.h>

void sticksum(int p[7], int x);
void stickthrow(int p[7],int x);

//sticksum 실행: 길이가 같은지 확인
//길이가 길면 stickthrow 실행: 길이가 가장 짧은 것을 자르고 하나를 버린다
//->sticksum 실행
//길이가 같으면 sticklist에서 막대 개수를 세고 그 값을 리턴
//포인터 문제를 어떻게 해결하지


void sticksum(int l1[7], int x) {
    int sum = 0;
    double b = 0;
    
    
    for (int i = 0; i < 7; i++) {
        
        b = pow(2, i);
        sum += ((int)b * l1[i]);
    }
    printf("%d\n", sum);

    if (sum > x){
        stickthrow(l1,x);
    }    

    if (sum == x) {
        int count = 0;
        for (int i = 0; i < 7; i++)
            count += l1[i];
        printf("%d", count);
        
    }
}

void stickthrow(int l2[7], int x) {
    int sum = 0, i;
    double b;
    for (i = 1; i < 7; i++) {
        if (l2[i] > 0) {
            l2[i]--;

            l2[i - 1] += 2;
            break;
        }
    }
    for (int j = 0; j < 7; j++) {

        b = pow(2, j);
        sum += ((int)b * l2[j]);
    }
    if (sum >= x) {
        l2[i - 1]--;
    }
    sticksum(l2, x);
}

int main() {
    int x, b, sum = 0, count = 0, stick = 64;
    scanf("%d", &x);
    int stickList[7] = { 0,0,0,0,0,0,1 };//길이가 2^리스트 인덱스인 막대의 개수
    
    sticksum(stickList, x);
    
}