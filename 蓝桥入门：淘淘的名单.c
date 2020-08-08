#include<stdio.h>
#include<string.h>
/*淘淘拿到了一份名单，他想对上面的名字进行处理，挑出一些特殊的名字，他请你来帮忙。
  淘淘关注以下名字：
  如果这个名字是“WYS”，他希望你的程序输出“KXZSMR”。
  如果这个名字是“CQ”，他希望你的程序输出“CHAIQIANG”。
  如果这个名字是“LC“，他希望你的程序输出“DRAGONNET”。
  如果这个名字是“SYT”或“SSD”或“LSS”或“LYF”，他希望你的程序输出“STUDYFATHER”。
  如果这个名字与上述任意名字都不相同，他希望你的程序输出“DENOMINATOR”。
  数据规模和约定
  对于  100%  数据，N  < =  10000，人名仅由大写字母组成，长度不超过5。
*/ 

int main()
{
	int x,i;
	char a[10000][5];
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<x;i++)
	{
		if(strcmp(a[i],"WYS")==0) printf("KXZSMR\n");
		else if(strcmp(a[i],"CQ")==0) printf("CHAIQIANG\n");
		else if(strcmp(a[i],"LC")==0) printf("DRAGONNET\n");
		else if(strcmp(a[i],"SYT")==0) printf("STUDYFATHER\n");
		else if(strcmp(a[i],"SSD")==0) printf("STUDYFATHER\n");
		else if(strcmp(a[i],"LSS")==0) printf("STUDYFATHER\n");
		else if(strcmp(a[i],"LYF")==0) printf("STUDYFATHER\n");
		else printf("DENOMINATOR\n");
	}
	return 0;
}
