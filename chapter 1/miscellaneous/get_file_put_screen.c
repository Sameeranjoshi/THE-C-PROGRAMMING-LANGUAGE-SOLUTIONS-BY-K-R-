/*
author:sameeran joshi <joshisameeran17@gmail.com>
date:3-may-2018
program inputs a text file.It reads the text in the file and displays it on the screen

./a.out samplefile

---samplefile is a file created with some text in it---
*/
#include<stdio.h>
int main(){
char c;
while((c=getchar())!=EOF){
	putchar(c);
}

}
