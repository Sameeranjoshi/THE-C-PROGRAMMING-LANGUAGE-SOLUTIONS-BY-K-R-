/*
author:sameeran joshi <joshisameeran17@gmail.com>
date:7-may-2018
exercise 1-2.3
Q.write a function any(s1,s2) returns the first location of string s1 where any character s2 occurs or -1 if s1 contains no character from s2
SIMILAR TO(strpbrk library function) which returns a pointer instead of integer
*/

#include <stdio.h>
#include<math.h>
int any(char s1[],char s2[]);
int main(){
	char str1[10];
	printf("enter string 1");
	scanf("%s",str1);
	char str2[10];
	printf("enter string 2");
	scanf("%s",str2);
	int position;
	position=any(str1,str2);
	if(position==-1)
		printf("element not found");
	else
		printf("the position of element is:%d",position);
return 0;
}
int any(char s1[],char s2[]){
	for(int i=0;s2[i]!='\0';i++){	
		for(int j=0;s1[j]!='\0';j++){
			if(s2[i]==s1[j])
				return (j+1);
		}
	}
return -1;
}

