#include<stdio.h>
#include<string.h>
void reverse(char ptr[],int size){
	char *hold=(ptr+size-1);	//points to last element of array
	char temp;
	while(ptr<hold){
		temp=*hold;
		*hold=*ptr;
		*ptr=temp;
		ptr++;
		hold--;	
	}		
}
void itoa(int integer,char ptr[]){
	int singledigit;
	int i=0;
		while(integer){
		singledigit=integer%10;
		ptr[i]=singledigit+'0';
		integer=integer/10;
		i++;
		}
		ptr[i]='\0';
	reverse(ptr,i);
}

void itob(int integer,char ptr[],int base){
	int singledigit;
	int i=0;
		while(integer){
		singledigit=integer%base;
		
		ptr[i]=singledigit>8?(singledigit-10)+'a':singledigit+'0';
		integer=integer/base;
		i++;
		}
		ptr[i]='\0';
	reverse(ptr,i);
}
