#include<stdio.h>
#include<string.h>
#include"exercise_3.5.h"
int main(){
	char str[30];
	itob(1234,&str,2);
	printf("value of string is %s length is %d",str,strlen(str));	
}
