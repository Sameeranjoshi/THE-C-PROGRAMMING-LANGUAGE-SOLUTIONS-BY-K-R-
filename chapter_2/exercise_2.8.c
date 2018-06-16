/*
author:sameeran joshi <joshisameeran17@gmail.com>
date:7-may-2018
exercise 1-2.3
Q.write a function rightrot(x,n) that returns the value of the integer x rotated right by n positions
*/

#include <stdio.h>
#include<math.h>
unsigned int rightrot(unsigned int x,int n){
	//for(int i=0;i<n;i++){
		if(x & 1){
			x = (x >> 1) | ~(~0U >> 1);
				
			//printf("initial x %d",x);
			//printf("final some %d",some);
			//x=x|128;//simply for 8 bits 128 is 10000000 now expand for any number greater than 128
			//x=x|some;
			printf("final x %d",x);
		}
		else		
			x=x>>1;
	//}

return x;
}
int main(){
	int x;
	int p,n;
	printf("enter string of bits of 8 characters");
//		for(int i=0;i<8;i++)
			scanf("%d",&x);		
	printf("enter number of bits");
	scanf("%d",&n);	
	
	int rotated_bits=rightrot(x,n);
	
		printf("the output string after rotating right is\n");

			printf("%d",rotated_bits);

	
return 0;
}

