#include <stdio.h>

int main(){
    int n;
    long long int sum=1;
    scanf("%d",&n);
    if (n==0)
        printf("%lld\n",sum);
    else{
        for (int i=1;i<=n;i++)
            sum*=i;
        printf("%lld\n",sum);
        }
        
}