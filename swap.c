#include<stdio.h>
#include<cs50.h>
int swap_max(int arr[], int l, int n){
	int max=arr[n];
	int pos=n;
	for(int i=n;i<l;i++){
	  if(arr[i]>max){
		max=arr[i];
		pos=i;}}
	arr[pos]=arr[n];
	arr[n]=max;
	
}
int ssort(int arr[], int l){
	for(int i=0; i<l;i++){
	swap_max(arr, l, i);}
	printf("the sorted array is \n|");
	for(int i=0; i<9;i++)
	printf(" %i |",arr[i]);
	printf("\n");
	
}

void main(void){
	int arr[]={9,5,12,6,22,18,7,10,4};
	int l=9;
	char a;
	printf("the array is \n|");
	for(int i=0; i<9;i++)
	printf(" %i |",arr[i]);
	printf("\n");
	
	do{
	int n=get_int("enter position ");
	swap_max(arr,l,n);
	printf("the array after swap_max is \n|");
	for(int i=0; i<9;i++)
	printf(" %i |",arr[i]);
	printf("\n");
	a=get_char("do you want to swap again(Y/N):");
	}while( a=='Y'|| a=='y');
	
	ssort(arr,l);
}
