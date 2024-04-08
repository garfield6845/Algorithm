#include <stdio.h>
int main(){
    for(int i=0;i<3;i++){
        int cnt;
        long long int a,b,suma=0,sumb=0;
        scanf("%d",&cnt);
        for(int j=0;j<cnt;j++){
            scanf("%16lld %lld",&a,&b);
            if (a>=0){
                suma+=a;
                sumb+=b;
            }
            else{
                suma-=a;
                sumb-=b;
            }
                
        }
        if(suma>0)
            printf("+");
        else if(suma=0)
            printf("0");
        else
            printf("-");
    }
}