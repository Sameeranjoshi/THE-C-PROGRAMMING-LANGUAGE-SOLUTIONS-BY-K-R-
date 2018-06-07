#include<stdio.h>
#include<string.h>
void escape(char *p,char *q){
	while(*p!='\0'){
		switch(*p){
		case '\n':
			*q='\\N';
			break;
		case '\t':
			*q='\\T';//unable to write into the pointer a visible escape secquence[ex.sam(\t)eer(\n)an(\n)joshi].so capital values are inserted temporarily.
			break;
		default:	
			*q=*p;
		}		
	p++;
	q++;
	}
	*q='\0';

}
int main(){
	char t[]="sam	eer\n"
		"an\n"
		"joshi";
	int len=strlen(t);
	char s[len];
	
	escape(t,s);
	printf("\nOLD ONE:%s",t);
	printf("\nNEW ONE:%s",s);
	
}
