#include<stdlib.h>
#include<time.h>
/*More function goes there*/

/*Bettty style doc for function goes there*/
int main(void)
{	
	
	int n;
	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
		printf("Is positive");
	else if(n == 0)
	        printf("is zero");
	elseprintf ("is negative");
        
	return (0);

}

