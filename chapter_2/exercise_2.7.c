/*
author:sameeran joshi <joshisameeran17@gmail.com>
date:7-may-2018
exercise 1-2.3
Q.write a function invert(x,p,n) that returns x with n bits begin at position p inverted leaving others unchanged.
*/

#include <stdio.h>
#include<math.h>
char* invert(char x[],int p,int n){
	if((p+n)<=9){
		for(int i=p-1;i<p+n-1;i++){
			if(x[i]=='0')
				x[i]='1';
			else
				x[i]='0';			
		}
	}
	else
	return "Q";
return x;
}
int main(){
	char x[8];
	int p,n;
		printf("enter string of bits of 8 characters");
		scanf("%s",x);	

	printf("enter starting point");
	scanf("%d",&p);	
	printf("enter number of bits");
	scanf("%d",&n);	

	char *inverted_bits;	
	inverted_bits=invert(x,p,n);
	if(*inverted_bits=='Q'){
		printf("not proper input");
	}else{
		printf("the output string after deleting is\n");
		while(*inverted_bits!='\0'){
			printf("%c",*inverted_bits);
		inverted_bits++;
		}
	}
return 0;
}

