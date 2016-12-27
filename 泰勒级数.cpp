#include<stdio.h>
int main()
{
	int i;
	float x;
	double sum,t,n;
	while(scanf("%f",&x)!=EOF)
	{
		n=1;
		t=x;
		sum=x;
		for(i=0;i<10;i++)
		{
		  t=-t*x*x/((n+1)*(n+2));
		  sum=sum+t;
		  n=n+2;
	    }
	    printf("%.2lf",sum);
	}
	return 0;
}
