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
int max=0;
for(int i=0;i<26;i++){
	if(alpha[i]>max)
		max=alpha[i];
}

	for(int i=0;i<26;i++){
		printf("%c",(i+65));
	}
printf("\n");

	for(int i=0;i<max;i++){
	//printf("  ");
		for(int i=0;i<26;i++){
			if(alpha[i]!=0){
				printf("*");
				alpha[i]--;
			}
			else
			printf(" ");
		}
			printf("\n");
	}
}
