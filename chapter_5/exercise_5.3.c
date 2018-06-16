#include<stdio.h>
char* strcat(char *str1,char *str2){
	char *new=(char *)malloc(strlen(str1)+strlen(str2)+1);
	char *save=new;
		
	while(*str1!='\0'){
		*new=*str1;
	new++;
	str1++;
	}
	
	while(*str2!='\0'){
		*new=*str2;
	new++;
	str2++;
	}
	*new='\0';	
	
	str1=save;
return str1;
}
int main(){
	char *s="hellomojo";
	char t[]="worldsam";
	char *r;		
	printf("\nS :%s",s);
	printf("\nT :%s",t);	
	s=strcat(s,t);
	printf("\nS after:%s",s);
}
