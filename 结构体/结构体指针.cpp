#include<stdio.h>
struct cs{
    char cName[9];
    char cSex[5];
    int iAge;
}freshman[5]={{"С��","��",18},
              {"С��","��",18},
              {"С��","��",18},
              {"С��","��",18},
              {"С��","Ů",18}};
int main()
{
    struct cs * p=freshman;
    int i; 
    printf("name\tsex\tage\n");
    for(i=0;i<5;i++,p++)
    {
      printf("%s\t%s\t%d\n",p->cName ,p->cSex ,p->iAge );
    }
    return 0;
}
