#include <stdio.h>
#include <math.h> 

int max(int a , int b){

  if(a > b ) return a; 
  else 
   return b ; 
}

int abs(int a){
  if(a < 0) 
   return a * -1; 
   
   else a ; 
}

int main(void)
{
	int x = 80; 
	int y = 100; 
	printf("square root of(%d+%d) = %d",x,y,sqrt(x+y)); 
	printf("Learning Branching Strategy\n"); 
	printf("%d",abs(-80)); 
	
	// get max 
	printf("%d",max(20,60)); 

return 0;
} 
