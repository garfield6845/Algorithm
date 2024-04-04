#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
    int T,n;
    int count=1;

    scanf("%d",&T);

    for (int i=0;i<T;i++){
        scanf("%d",&n);
        if (n<1||n>10)
            i--;
        else{
            if(n%2==0)
                count++;
            for(int i2=1;i2<(n/2)+1;i2++)
                count=count+n-i2*2;
            
            if(n%3==0)
                count++;
            
            for (int i3=1;i3<(n/3)+1;i3++)
                count=count+n-i3*3;
            
        }
        printf("%d\n",count);
    }
    return 0;
    
}

//이건 도저히 모르겠네 빠른 포기