#include<stdio.h>
struct date{
    int year;
    int month;
    int day;
};
struct cs{
    char cName[9];
    char cSex[5];
    int iAge;
    struct date apply;
};
int main()
{
    struct cs freshman={"Ð¡ÂÞ","ÄÐ",18,{2016,9,3}};
    printf("name\tsex\tage\tdata of application\n");
    printf("%s\t%s\t%d\t%d.%d.%d\n",freshman.cName ,freshman.cSex ,freshman.iAge,freshman.apply.year,freshman.apply.month,freshman.apply.day);
    return 0;
}
