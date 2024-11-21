#include<stdio.h>

 int a , b , select , total ;
 
    void zero(){
  	
  	printf("TOTAL IS : %d");
  }
  
   void addition(){
  	printf("ENTER VALUE A :");
  	scanf("%d",&a);
  	
  	printf("ENTER VALUE A :");
  	scanf("%d",&b);
  	
  	total=a+b;
  	printf("TOTAL IS : %d",total);
  }
  
  
  void subtraction(){
  	printf("ENTER VALUE A :");
  	scanf("%d",&a);
  	
  	printf("ENTER VALUE A :");
  	scanf("%d",&b);
  	
  	total=a-b;
  	printf("TOTAL IS : %d",total);
  }
  
   void multiplication(){
  	printf("ENTER VALUE A :");
  	scanf("%d",&a);
  	
  	printf("ENTER VALUE A :");
  	scanf("%d",&b);
  	
  	total=a*b;
  	printf("TOTAL IS : %d",total);
  }
  
  
  void division(){
  	printf("ENTER VALUE A :");
  	scanf("%d",&a);
  	
  	printf("ENTER VALUE A :");
  	scanf("%d",&b);
  	
  	total=a/b;
  	printf("TOTAL IS : %d",total);
  }
  
  void modulo(){
  	printf("ENTER VALUE A :");
  	scanf("%d",&a);
  	
  	printf("ENTER VALUE b :");
  	scanf("%d",&b);
  	
  	total=a%b;
  	printf("TOTAL IS : %d",total);
  }
 
 
  int main(){
    printf("Press 1 for +  :\n");
     printf("Press 2 for -  :\n");
     printf("Press 3 for *  :\n");
     printf("Press 4 for /  :\n");
     printf("Press 5 for %%  :\n");
     printf("Press 0 for 0  :\n");
     
     printf(".................\n");
     
     printf("EHAT YOU WANT TO DO  :");
  	scanf("%d",&select);
  	
  	switch(select){
  		case 1 : {
  			addition();
			break;
		  }
		  case 2 : {
  			subtraction();
			break;
		  }
		  	case 3 : {
  			multiplication();
			break;
		  }
		  case 4 : {
  			division();
			break;
		  }
	    	case 5: {
  			modulo();
			break;
		  }
		  case 6 : {
  			zero();
			break;
		  }
	  }
  }
