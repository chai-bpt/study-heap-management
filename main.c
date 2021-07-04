#include<stdio.h>
#include<unistd.h>
int main(void)
{
	void* current_brk = NULL;
	
	printf("\n\t%s\t%s\t%s\t%s\t%d\tSTART",__DATE__,__TIME__,__FILE__,__func__,__LINE__);
	
	current_brk = sbrk(0);

	printf("\n\tcurrent_brk = %p",current_brk);

	getchar();

	printf("\n\t%s\t%s\t%s\t%s\t%d\tEND\n",__DATE__,__TIME__,__FILE__,__func__,__LINE__);
}
