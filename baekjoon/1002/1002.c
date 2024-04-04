#include <stdio.h>
#include <math.h>
//미해결
int main(){
    int x1,y1,r1,x2,y2,r2,T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        if(x1==x2&&y1==y2){
            if(r1==r2)
                printf("-1\n");
            else
                printf("0\n");
        }
        else if(x1==0&&y2==0){
            if(abs(x1-x2)==(r1+r2))
                printf("1\n");
            else   
                printf("2\n");
        }
        else if(y1==0&&y2==0){
            if(abs(y1-y2)==(r1+r2))
                printf("1\n");
            else
                printf("2\n");
        }
        //설마 9줄부터 여기까지 아예 의미가 없나 
        else{
            //sqrt()함수:루트 함수
        }
    }
    
}

//1번과 2번의 좌표가 다른데 반지름이 같으면 경우의 수 1
//반지름이 다르면 경우의 수 2
//1번과 2번의 좌표가 같고 반지름이 같으면 -1을 출력(무한대)
//좌표가 같은데 반지름이 다르면 0을 출력(있을 수 없는 경우)
//같은 좌표축에 1번과 2번이 위치할 때 반지름의 합이 그 거리와 같으면 1
//고등 수학 공부 다시 해야하는데
//그냥 1 2번 거리 구하고 반지름들의 합이 그거보다 큰지 같은지 작은지였던가 아마
//루트 함수가 뭐더라 