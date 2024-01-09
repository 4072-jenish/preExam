/*
Q1 implement a C prigram to simulate a simpale calculeter that perform addition,substrection,multiplication and divison 
based on user input: 
*/

#include<stdio.h>

main(){
	
	int x,a,b;
	
	printf("press 1 for addition\n");
	printf("press 2 for subtraction\n");
	printf("press 3 for multiplication\n");
	printf("press 4 for divison\n");
	printf("Enter your choice");
	scanf("%d",&x);
	
	 switch(x){
	 	
	 	case 1:
	 	       printf("Enter A:");
	 	       scanf("%d",&a);
	 	       printf("Enter B:");
	 	       scanf("%d",&b);
	 	       
	 	       printf("the addition is %d",a+b);
	 break ;
	    case 2:
	 	       printf("Enter A:");
	 	       scanf("%d",&a);
	 	       printf("Enter B:");
	 	       scanf("%d",&b);
	 	       
	 	       printf("the subtraction is %d",a-b);
	 break ;
	 case 3:
	 	       printf("Enter A:");
	 	       scanf("%d",&a);
	 	       printf("Enter B:");
	 	       scanf("%d",&b);
	 	       
	 	       printf("the multiplication is %d",a*b);
	 break ;
	 case 4:
	 	       printf("Enter A:");
	 	       scanf("%d",&a);
	 	       printf("Enter B:");
	 	       scanf("%d",&b);
	 	       
	 	       printf("the divison is %d",a/b);
	 break ;
	 
	 default:
	 	     printf("Enter not valid");
	 	     break ;
	 
}
}
/*
press 1 for addition
press 2 for subtraction
press 3 for multiplication
press 4 for divison
Enter your choice4
Enter A:10
Enter B:5
the divison is 2
*/
