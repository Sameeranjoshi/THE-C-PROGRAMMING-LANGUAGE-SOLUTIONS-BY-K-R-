#include<stdio.h>
int binarysrch(int arr[],int n,int key);

int main(){
	int k[]={3,6,1,4,2,8,9,5};
	int size=8;
	printf("\nVALUE TO SEARCH IS '8'");
	int found=binarysrch(k,size,8);
	if(found==-1)
		printf("element not present");
	else
		printf("present at :%d index",found);		
}
int binarysrch(int arr[],int n,int key){
	int left=arr[0];
	int right=arr[n-1];
	int mid;
	while(left<right){
		mid=(left+right)/2;
		if(key<arr[mid]){
			right=mid-1;		
		}
		else{
			left=mid+1;		
		}
	}
	if(arr[left]==key)
		return left;
	else 
		return -1;
}

