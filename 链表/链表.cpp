#include<stdio.h>
#include<stdlib.h>
int iCount=0;
struct list * creat_list();
void print(struct list * listhead);
struct list
{
	int num;
	struct list * Pnext;
};
///////////////
void print(struct list * listhead)
{
	struct list * pHead=listhead;
	while(pHead!=NULL)
	{
		printf("%-3d",pHead->num);
		pHead=pHead->Pnext;
    }
    printf("\n");
    return;
}
/////////////////
struct list * creat_list()
{
    struct list * pHead=NULL;
	struct list *pNew,*pEnd;
	pNew=pEnd=(struct list * )malloc(sizeof(struct list));
	pNew->num=1;
	while(pNew->num!=0)
	{
	   iCount++;
	   if(iCount==1)
	   {  
	    pNew->Pnext=NULL;
	    pEnd=pNew;
	    pHead=pNew;
	   }
	   else
	   {
	   	pNew->Pnext=NULL;
	   	pEnd->Pnext=pNew;
	   	pEnd=pNew;
	   }
	  pNew=(struct list * )malloc(sizeof(struct list));
	  scanf("%d",&pNew->num);
	}
	return pHead;
 }
 //////////////////
 int main()
 {
 	struct list * head;
 	head=creat_list();
 	print(head);
 	return 0;
 }
