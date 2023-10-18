#include<stdio.h>

void main(){
	int key, i, n, arr[10];
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	printf("\nEnter %d elements: ",n);
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the key to be searched: ");
	scanf("%d",&key);
	for(i = 0; i < n; i++){
		if(key == arr[i]){
			printf("Element %d present at arr[%d]\n",key,i+1);
		}//end of if
	}//end of for
}//end of main
