//输入三位同学的成绩信息，并输出姓名与平均分 
#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	float math;
	float english;
	float chinese;
}stud[3];
main()
{
	struct student stud[3];
	int i;
  float ave=0.0;
  printf("请输入3位同学的信息:\n");
  for(i=0;i<3;i++)
  {
  	scanf("%s %f %f %f\n",stud[2].name,&stud[2].math,&stud[2].english,&stud[2].chinese);
  	ave=(stud[2].math+stud[2].english+stud[2].chinese)/3;
  	printf("名字：%s 平均分；%f\n",stud[2].name,ave);
  }
 } 
