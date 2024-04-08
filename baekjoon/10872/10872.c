#include <stdio.h>

int main(){
    int n,sum=1;
    scanf("%d",&n);
    if (n==0)
        printf("%d\n",sum);
    else{
        for (int i=1;i<=n;i++)
            sum*=i;
        printf("%d\n",sum);
        }
        
}