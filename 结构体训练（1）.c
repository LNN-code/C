//������λͬѧ�ĳɼ���Ϣ�������������ƽ���� 
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
  printf("������3λͬѧ����Ϣ:\n");
  for(i=0;i<3;i++)
  {
  	scanf("%s %f %f %f\n",stud[2].name,&stud[2].math,&stud[2].english,&stud[2].chinese);
  	ave=(stud[2].math+stud[2].english+stud[2].chinese)/3;
  	printf("���֣�%s ƽ���֣�%f\n",stud[2].name,ave);
  }
 } 
