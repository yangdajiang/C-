#include<stdio.h>
struct cs{
	char cName[20];
	char cSex[5];
	char cProfessional[15];
	int iClass;
}freshman[5];
int main()
{
	int i;
    struct cs * iPiont;
    struct cs freshman[5]={{"luoming","boy","wangluo",1605},
	          {"zhoujunwu","boy","wangluo",1605},
			  {"yangdajiang","boy","wangluo",1601},
			  {"huabuxiu","boy","jike",1600},
			  {"jiangtingting","girl","....",1600}};
    iPiont=freshman;
    printf("freshman information:\n");
    for(i=0;i<5;i++,iPiont++)
    {
    	printf("name:%s  sex:%s  professional:%s  class:%d\n",
		iPiont->cName,iPiont->cSex,iPiont->cProfessional,iPiont->iClass);
	}
	return 0;
}
