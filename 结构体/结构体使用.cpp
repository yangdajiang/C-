#include<stdio.h>
struct cs{
  char cName[9];
  char cSex[5];
  int iAge;
};
int main()
{
  struct cs freshman={"Ð¡ÂÞ","ÄÐ",18 };
  printf("name\tsex\tage\n");
  printf("%s\t%s\t%d\n",freshman.cName ,freshman.cSex ,freshman.iAge );
  return 0;
}
