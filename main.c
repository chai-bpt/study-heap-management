#include<stdio.h>
#include<unistd.h>
int main(void)
{
	void* current_brk = NULL;
	void* previous_brk = NULL;
	void* start_brk = NULL;
	int size = 1024;
	int loopmax = 6;
	int loopcounter = 0;

	
	printf("\n\t%s\t%s\t%s\t%s\t%d\tSTART",__DATE__,__TIME__,__FILE__,__func__,__LINE__);
	
	current_brk = sbrk(0);
	start_brk = current_brk;
	previous_brk = current_brk;
	printf("\n\tstart_brk    = %p",start_brk);
	printf("\n\tprevious_brk = %p",previous_brk);
	printf("\n\tcurrent_brk  = %p",current_brk);
	getchar();
	

	for(loopcounter = 0; loopcounter < loopmax; loopcounter++)
	{
		printf("\n\t%d times increasing heap memory by %d bytes", (loopcounter+1), size);
		sbrk(size);
		current_brk = sbrk(0);	
		printf("\n\tstart_brk    = %p",start_brk);
		printf("\n\tprevious_brk = %p",previous_brk);
		printf("\n\tcurrent_brk  = %p",current_brk);
		printf("\n\tCURRENT INCREASE :: current_brk - previous_brk = %d",(current_brk - previous_brk));
		printf("\n\tTOTAL INCREASE   :: current_brk - start_brk    = %d",(current_brk - start_brk));
		previous_brk = current_brk;
		getchar();
	}

	printf("\n\t%s\t%s\t%s\t%s\t%d\tEND\n",__DATE__,__TIME__,__FILE__,__func__,__LINE__);
}
