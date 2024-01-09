#include<stdio.h>

main(){
	int i,j;
  	FILE *D;
  	
  	D = fopen("data.txt""r");
  	
  	if (D==NULL){
  		printf("file not open : ");
	  }else{
	  	printf("first Employer",D);
	  }	
  }
