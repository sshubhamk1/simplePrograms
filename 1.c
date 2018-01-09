#include <stdio.h>

int main(void){
    int test,N,K;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&N,&K);
        int min= 10000000;
        printf("%d\n",min);
        int temp;
        for(int i=0;i<N;i++){
            scanf("%d",&temp);
            if(min>temp)min = temp;
        }
        printf("%d\n",K-min);
        printf("k= %d min = %d\n",K,min);
    }
    return 0;
}
