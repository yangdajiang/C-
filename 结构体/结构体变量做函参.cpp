#include<stdio.h>
int print(struct cs csman);

struct cs{
    char cName[9];
    char cSex[5];
    int iAge;
}freshman={"Ð¡ÂÞ","ÄÐ",18};
int main()
{
    print(freshman);
    return 0;
}
int print(struct cs csman)
{
    int i;
    printf("name\tsex\tage\n");
    printf("%s\t%s\t%d\n",csman.cName ,csman.cSex ,csman.iAge);
    return 0;
}
