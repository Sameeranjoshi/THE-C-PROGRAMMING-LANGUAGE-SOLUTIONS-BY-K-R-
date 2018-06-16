/*
author:sameeran joshi <joshisameeran17@gmail.com>
date:5-may-2018
Q.write a loop equivalent to for loop without using && ,||
for(int i=0;i<lim-1&&(c=getchar())!='\n'&&c!=EOF;++i)
s[i]=c;
*/

#include<stdio.h>
#include<limits.h>
#include<math.h>
int main(){
int lim=3;
char c;
for(int i=0;i<lim-1;i++){
	if((c=getchar())!='\n'){	
		if(c!=EOF){
			printf("ok");
		}
	}

}

}
