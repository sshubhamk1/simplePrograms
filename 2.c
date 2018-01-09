#include <stdio.h>
int arr[10000000];
int main(void){
    int test;
    scanf("%d",&test);
    while(test--){
        int count=0;
        int N,pl;
        scanf("%d %d",&N,&pl);
        arr[count++]=pl;
        for(int i=0;i<N;i++){
            char o;
            scanf("%c",&o);
            if(o=='P'){
                scanf("%d",&pl);
                arr[count++]=pl;
            }
            else{
                count--;
            }
        }
        printf("Player %d\n",arr[count]);
        for(int i=0;i<count;i++)printf("%d ",arr[i]);
    }
    return 0;
}
