/*

*/

#include<stdio.h>
main(){
	int n;
	int a[100];
  	int i,sum=0, qube;
  	int *ptr;
	
	printf("Enter Array's size :");
	scanf("%d",&n);

  	for (i=0;i<n;i++){
  		   printf("Enter elements :");
  		   scanf("%d",&a[i]);
	  }
  	for (i=0;i<n;i++){
  		  printf("%d\n",a[i]);
  		  sum+=a[i];
  	 }
  	 sum*sum*sum == qube;
  	 ptr = qube;
	printf("qube of Array is %d",*ptr);
	
}
/*

*/
