#include <stdio.h>
int main(){
int alpha[26];
for (int i=0;i<26;i++)
	alpha[i]=0;
int c=0,cnt=0;
while((c=getchar())!= 'Q'){
	if(c==' '||c=='\n'||c=='\t')
		cnt++;
	else
		alpha[c-'a']++;
}
for(int i=0;i<26;i++){
	int count=alpha[i];
	printf("%3c",(i+65));
	for(int j=0;j<count;j++)
		printf("*");
	printf("\n");
}
printf("%d",cnt);
}
