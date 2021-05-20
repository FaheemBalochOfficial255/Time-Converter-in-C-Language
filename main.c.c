#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main ()
{
	int from;
	int to;
	float time;
	
	printf("***TIME CONVERTER***");
	printf("\n\nConvert From");
	printf("\nSelect Only One Option");
	printf("\n1. Hour");
	printf("\n2. Minute");
	printf("\n3. Second");
	printf("\nOption\t");
	scanf("%d",&from);
	printf("\nConvert To");
	printf("\nSelect Only One Option");
	printf("\n1. Hour");
	printf("\n2. Minute");
	printf("\n3. Second");
	printf("\nOption\t");
	scanf("%d",&to);
	printf("\nEnter Time\t");
	scanf("%f",&time);
	
	if(from==1 && to==1)
	{
		printf("\nConverting %f Hours Results in %f Hours",time,time);
	}
	if(from==1 && to==2)
	{
		float result=time*60;
		printf("\nConverting %f Hours Result in %f Minutes",time,result);
	}
	if(from==1 && to==3)
	{
		float result=time*60*60;
		printf("\nConverting %f Hours Result in %f Seconds",time,result);
	}
	if(from==2 && to==1)
	{
		float result=time/60;
		printf("\nConverting %f Minutes Result in %f Hours",time,result);
	}
	if(from==2 && to==2)
	{
		printf("\nConverting %f Minutes Result in %f Minutes",time,time);
	}
	if(from==2 && to==3)
	{
		float result=time*60;
		printf("\nConverting %f Minutes Result in %f Seconds",time,result);
	}
	if(from==3 && to==1)
	{
		float result=time/60/60;
		printf("\nConverting %f Seconds Result in %f Hours",time,result);
	}
	if(from==3 && to==2)
	{
		float result=time/60;
		printf("\nConverting %f Seconds Result in %f Minutes",time,result);
	}
	if(from==3 && to==3)
	{
		printf("\nConverting %f Seconds Result in %f Seconds",time,time);
	}
	
	return 0;
}
