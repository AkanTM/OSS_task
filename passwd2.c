#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void *args)
{
	int guess=0;
	char buffer[50], *end;	
	srand(time(NULL));
	
	int random = rand();

	scanf("%s", buffer);

	guess = (int)strtol(buffer,&end, 10);
	      
	if( ((random ^ guess & 0xffff) == 0x7ebd4010 ) 
		 && ((random^guess ^ 0xffff000) == 0xebdb010) )
	{
		printf("Success!\n");
	}
	else 
	{
		printf("Fail, try again :)\n");
		
		printf("random ^ guess = 0x%x\n",  random ^ guess);
	}
	

	return 0;
}
