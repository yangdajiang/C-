#include<stdio.h>
double avg(int arr[],int size);
double avg(int arr[],int size)
{
	int i,sum=0;
	double av;
	for(i=0;i<size;i++) sum+=arr[i];
	av=sum/size;
	return av;
}
int main()
{
	int a[]={1,2,3,4,5};
	double b;
	b=avg(a,5);
	printf("%f",b);
	return 0;
 }
