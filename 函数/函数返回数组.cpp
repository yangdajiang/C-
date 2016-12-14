#include<stdio.h>
int *fun()
{
	static int arr[5]={1,2,3,4,5};
	return arr;
}
int main()
{
	int *p,i;
	p=fun();
	for(i=0;i<5;i++) printf("%d\n",*(p+i));
	return 0;
}
