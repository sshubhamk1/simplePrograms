#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char word1[101];
	char word2[101];
	int sum1=0,sum2=0;
	scanf("%s",word1);
	scanf("%s",word2);
	int n=strlen(word1);
	for(int i=0;i<n;i++){
		sum1+=tolower(word1[i]);
		sum2+=tolower(word2[i]);
	}
	if(sum1==sum2)printf("0\n");
	else if(sum1>sum2)printf("1\n");
	else printf("-1\n");
	return 0;
}
