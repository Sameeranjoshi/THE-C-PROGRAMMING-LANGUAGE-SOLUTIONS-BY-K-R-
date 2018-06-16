/*
author:sameeran joshi <joshisameeran17@gmail.com>
date:7-may-2018
exercise 1-2.3
Q.write a function squeeze(s1,s2) which deletes each character in s1 that matches character in s2
*/

#include <stdio.h>
#include<math.h>
char* squeeze(char s1[],char s2[]);
int main(){
	char str1[10];
	printf("enter string 1");
	scanf("%s",str1);
	char str2[10];
	printf("enter string 2");
	scanf("%s",str2);
	char *s3;	//created a pointer variable for printing the value sent back by function
	s3=squeeze(str1,str2);
	printf("the output string after deleting is\n");
	while(*s3!='\0'){
		printf("%c",*s3);
	s3++;
	}
	
return 0;
}
char* squeeze(char s1[],char s2[]){
	int k=0,flag;
	for(int i=0;s1[i]!='\0';i++){
		flag=0;
		for(int j=0;s2[j]!='\0';j++){
			if(s1[i]==s2[j])
				flag=1;
		}
		if(flag==0){
			s1[k]=s1[i];
			k++;
		}	
	}
	s1[k]='\0';	
		
return s1;
}

