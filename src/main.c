#include <stdio.h>
#include <math.h> 

int max(int a , int b){

  if(a > b ) return a; 
  else 
   return b ; 
}

int round (double a){
  return (int) a; 
}

int main(void)
{
	int x = 80; 
	int y = 100; 
	printf("square root of(%d+%d) = %d",x,y,sqrt(x+y)); 
	printf("Learning Branching Strategy\n"); 
        printf("%d",round(90.2)); 
	
	
	// get max 
	printf("%d",max(20,60)); 

return 0;
} 
