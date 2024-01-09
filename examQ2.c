/*
 Q2 WAP to sum of all elements in an array using a function. 
*/
#include<stdio.h>
  void sum(){
  	int a[100];
  	int i,sum=0;
  	int n;
	
	printf("Enter Array's size :");
	scanf("%d",&n);
	
  	for (i=0;i<n;i++){
  		   printf("ENter elements :");
  		   scanf("%d",&a[i]);
	  }
  	for (i=0;i<n;i++){
  		  sum+=a[i];
  	 }
  	 printf("Sum of Array is %d",sum);
  }

main(){
	
	sum();
}
