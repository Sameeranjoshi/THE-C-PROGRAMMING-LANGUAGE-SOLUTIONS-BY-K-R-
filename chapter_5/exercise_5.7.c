#include<stdio.h>
#include<string.h>

void swap(int *p,int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

void sort(char **NAMES,int size){
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1;j++){
			if(strcmp(*(NAMES+j),*(NAMES+j+1))>0){		//means str1>str2 | suppying the addresses		
				swap((NAMES+j),(NAMES+j+1));
			}		
		}		
	}
}

void output (char **NAMES,int size){	
for(int i=0;i<size;i++)
		printf("\n%s",*(NAMES+i));

}

int main(){
	char *names[]={"zfor","kfor","afor","dfor"};	
	int size=4;
	printf("\ninitial values is :%s %s %s %s",*(names+0),*(names+1),*(names+2),*(names+3));

	sort(&names[0],size);
	output(&names[0],size);	
	
}

