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
    int i; 
    printf("name\tsex\tage\n");
    for(i=0;i<5;i++)
    {
      printf("%s\t%s\t%d\n",freshman[i].cName ,freshman[i].cSex ,freshman[i].iAge );
    }
    return 0;
}
