/*
author:sameeran joshi <joshisameeran17@gmail.com>
date:7-may-2018
exercise 1-2.3
Q.write a function htoi(s) to convert a string of hexadecimal digits to its equivalent integer value.
*/

#include <stdio.h>
#include<math.h>
int htoi(char s[]);
int main(){
	char hex[10];
	printf("enter hex number");
	scanf("%s",hex);
	int decimal=htoi(hex);
	printf("\ndecimal %d",decimal);
return 0;
}
int htoi(char s[]){
	int i=0,dec=0,k;
	while(s[i]!='\0'){
		i++;
	}
	i--;
	k=0;
	int var=0;
	
	while(s[i]!='x'){	//here it dosent work for s[i]!='X' add || condition
		if(s[i]=='a'||s[i]=='A')
			var=10;
		else if(s[i]=='b'||s[i]=='B')
			var=11;
		else if(s[i]=='c'||s[i]=='C')
			var=12;
		else if(s[i]=='d'||s[i]=='D')
			var=13;
		else if(s[i]=='e'||s[i]=='E')
			var=14;
		else if(s[i]=='f'||s[i]=='F')
			var=15;
		else
			var=((int)s[i])-'0';
		
		dec+=var*pow(16.0,k);	
		i--;
		k++;

	}
return dec;
}

