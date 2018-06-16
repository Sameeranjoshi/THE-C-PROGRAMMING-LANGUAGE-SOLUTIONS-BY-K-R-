#include<stdio.h>
int strend(char *s,char *t){
	char *last_on_s=s,*last_on_t=t;
	while(*last_on_s!='\0')
		last_on_s++;
	while(*last_on_t!='\0')
		last_on_t++;
	last_on_s--;
	last_on_t--;
	
	if(*last_on_t==*last_on_s){
		while(*last_on_t!=*(t-1)){
//do u know why t-1 used?as the loop continues till the first element but dosen't check the first element.
			if(*last_on_s!=*last_on_t){
				return 0;				
			}
		last_on_s--;
		last_on_t--;
		}
		
	return 1;
	}
	else
		return 0;
	
}
int main(){
	char *s="helloworld";
	char *t="world";
	int found=strend(s,t);	
	if(found)
		printf("\nYES");
	else
		printf("\nNO");	
}
