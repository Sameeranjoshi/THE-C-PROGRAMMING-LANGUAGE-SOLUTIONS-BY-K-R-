#include<stdio.h>
void expand(char *p,char *q){
	int k=0,right=-1;
	//initial check for a '-'
	if(*p=='-'){
		q[k]='-';
		k++;
		p++;
	}
		
	while(*p!='\0'){
		if(*p=='-'){			
			int start;
			int left=*(p-1);	
			if(left==right)
				start=left+1;
			else
				start=left;
			right=*(p+1);
//			printf("left and right %d %c and p %c",left,right,*p);
			for(int i=start;i<=right;i++){
				q[k]=i;
				k++;
			}
		}
	p++;
	}
	p--;
	if(*(p)=='-'){
		q[k]='-';
		k++;
		p++;
	}
	q[k]='\0';

}
int main(){
	char s1[]="-a-m0-9-";
	char s2[100];
	expand(s1,s2);	
	printf("\nINITIAL VALUE IS %s",s1);
	printf("\nFINAL VALUE IS %s",s2);
}
