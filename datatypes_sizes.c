/*
author:sameeran joshi <joshisameeran17@gmail.com>
date:3-may-2018
program to check the sizeof operator and check the sizes of datatypes
*/

#include<stdio.h>
#include<limits.h>
#include<math.h>
int main(){

//following variables have been declared in the <limit.h> header file located at /user/include
printf("SCHAR_MAX %d,SHRT_MAX %d,INT_MAX %d,LONG_MAX %ld",SCHAR_MAX,SHRT_MAX,INT_MAX,LONG_MAX);


//all about signed
printf("\nsize is %lf",(pow(2.0,sizeof(char)*8)/2-1));
printf("\nsize is %lf",(pow(2.0,sizeof(short int)*8)/2-1));
printf("size is %lf",pow(2.0,sizeof(int)*8)/2-1);
printf("size is %lf",pow(2.0,sizeof(long int)*8)/2-1);


printf("\nITS ALL ABOUT UNSIGNED");
//all about unsigned
printf("\nsize is %lf",(pow(2.0,sizeof(char)*8)-1));
printf("\nsize is %lf",(pow(2.0,sizeof(short int)*8)-1));
printf("size is %lf",pow(2.0,sizeof(int)*8)-1);
printf("size is %lf",pow(2.0,sizeof(long int)*8)-1);

//remove this
//printf("size is %d",sizeof(short int));
//printf("size is %d",sizeof(long int));
//printf("size is %d",sizeof(signed int));
//printf("size is %d",sizeof(unsigned int));
//printf("size is %d",sizeof(float));
//printf("size is %d",sizeof(char));

}
