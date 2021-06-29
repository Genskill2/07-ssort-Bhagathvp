#include <stdio.h>


void
swap_max (int arr[], int length, int position)
{
  int max = position;
  int temp = 0;
  for (int i = position; i < length; i++)
    {
      if (arr[i + 1] > arr[max])
	{
	  max = i + 1;
	}
    }
  temp = arr[max];
  arr[max] = arr[position];
  arr[position] = temp;
}

void
ssort (int arr[], int l)
{
  for (int i = 0; i < l; i++)
    {
      swap_max (arr, l, i);
    }
    for (int i = 0; i < l; i++){
 	printf("| %i |",arr[i]);
 	} 
  	printf("\n");
  
}


int
main (void)
{

  int l[] = { 10, 4, 6, 2, 7, 3, 15, 8 };
  int k = 8;
 	swap_max (l, 8, 0);
 	printf("swap 0\n");
 	for (int i = 0; i < k; i++){
 	printf("| %i |",l[i]);
 	} 
  	printf("\n");
  	 swap_max (l, 8, 1);
  	 printf("swap 1\n");
 	for (int i = 0; i < k; i++){
 	printf("| %i |",l[i]);
 	} 
  	printf("\n");
  	swap_max (l, 8,2);
 	printf("swap 2\n");
 	for (int i = 0; i < k; i++){
 	printf("| %i |",l[i]);
 	} 
  	printf("\n");
  	 swap_max (l, 8,3);
 	printf("swap 3\n");
 	for (int i = 0; i < k; i++){
 	printf("| %i |",l[i]);
 	} 
  	printf("\n");
  	swap_max (l, 8, 4);
 	printf("swap 4\n");
 	for (int i = 0; i < k; i++){
 	printf("| %i |",l[i]);
 	} 
  	printf("\n");
  	printf("swap 5\n");
  	 swap_max (l, 8, 5);
 	for (int i = 0; i < k; i++){
 	printf("| %i |",l[i]);
 	} 
  	printf("\n");
  	swap_max (l, 8, 6);
  	printf("swap 6\n");
 	for (int i = 0; i < k; i++){
 	printf("| %i |",l[i]);
 	} 
  	printf("\n");
  	 swap_max (l, 8, 7);
  	 printf("swap 7\n");
 	for (int i = 0; i < k; i++){
 	printf("| %i |",l[i]);
 	} 
  	printf("\n");
  	  

}
