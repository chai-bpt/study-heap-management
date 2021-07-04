#include<stdio.h>

int main(void)
{
	printf("\n\t%s\t%s\t%s\t%s\t%d\tSTART",__DATE__,__TIME__,__FILE__,__func__,__LINE__);
	printf("\n\t%s\t%s\t%s\t%s\t%d\tEND\n",__DATE__,__TIME__,__FILE__,__func__,__LINE__);
}
