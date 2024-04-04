#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
    int m,n;
    do{
    scanf("%d %d",&m,&n);
    }while(m>n||m>100000||n<1);


    if (m==1)
        m++;
    if (m==2){
        printf("%d\n",2);
        m++;
    }
    if(m>2){
        for (int i=m;i<=n;i++){
            int verify;
            if(i%2==1){
                for(int j=3;j<i;j+=2)
                    if (i%j==0){
                        verify=1;
                        break;
                    }
                    else
                        verify=0;
                    
        
                if (verify==0)
                    printf("%d\n",i);
            }
        }
    }
}
//에라토스테네스의 체?를 어떻게 쓰지 시간초과 안뜨려면 이걸 써야한대는데 