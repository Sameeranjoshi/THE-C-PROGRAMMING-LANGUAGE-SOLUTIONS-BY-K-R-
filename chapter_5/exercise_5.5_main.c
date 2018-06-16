#include<stdio.h>
#include<stdlib.h>
#include "exercise_5.5.h"

int main(){
	char *s="hello";
	char *t="hellios";
	int n=6;
	if(n>strlen(t)){
	printf("\nsorry the value of n is greater than the size of t");	
	}
	else{
	
		printf("\nBEFORE CAT\ns=\"%s\"\nt=\"%s\"",s,t);
		s=strncat(s,t,n);
		printf("\nAFTER CAT\ns=\"%s\"\nt=\"%s\"",s,t);
	
		printf("\nBEFORE COPY\ns=\"%s\"\nt=\"%s\"",s,t);
		s=strncpy(s,t,n);
		printf("\nAFTER COPY\ns=\"%s\"\nt=\"%s\"",s,t);	
	

	
		printf("\nBEFORE COMPARE\ns=\"%s\"\nt=\"%s\"",s,t);
		int x=strncmp(s,t,n);
		if(x<0)
		printf("\nsmall");
		if(x==0)
		printf("\nequal");	
		if(x>0)
		printf("\nlarge");

	}
	
}
