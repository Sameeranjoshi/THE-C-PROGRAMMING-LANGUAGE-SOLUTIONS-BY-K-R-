#include<stdio.h>
int strrindex(char *p,char *q){
	char *save=p;
	while(*p!='\0')// p points to last element
		p++;
	while(p!=save-1){
		if(*p==*q){	
			char *saveq=q;
				int notfound=0;
				char *loop=p;
				while(*q!='\0'){
					if(*loop!=*q){
						notfound=1;
						break;
					}
				q++;
				loop++;	
				}
			if(notfound==0)	//means found
				return (p-save);	
			else
				q=saveq;			
		}
	p--;
	}
	return -1;	
}
int main(){
	char s[]="joshisameeranjoshijoshisamjoshi";
	char t[]="joshi";
	int index=strrindex(s,t);
	printf("the index of element is %d",index);
}
