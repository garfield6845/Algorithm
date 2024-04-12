#include <stdio.h>

int counttozero(int n){
    int cnt=0;
    while(n!=0){
        n/=5;
        cnt+=n;
    }
    return cnt;
}

int main(){
    int m;
    scanf("%d",&m);
    int min=0,max=m+5;
    int temp,tempM;
    
    while(1){
        temp=(min+max)/2;
        tempM=counttozero(temp);

        if (tempM<m)
            min=temp+1;
        else if (tempM>m)
            max=temp-1;
        if (tempM==m)
            break;
    }
    printf("%d",tempM);
}
//수업때 어느정도 알려준 문제 제출해도 됨
//시험?때 이 문제 응용해서 나옴 11687번