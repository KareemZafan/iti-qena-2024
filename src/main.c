#include <stdio.h>
#include <math.h> 

int max(int a , int b){

   return (a > b) ? a : b; 
}

int main(void)
{
	int x = 80; 
	int y = 100; 
	printf("square root of(%d+%d) = %d",x,y,sqrt(x+y)); 
	printf("Learning Branching Strategy\n"); 
	
	
	// get max 
	printf("%d",max(20,60)); 

return 0;
} 
