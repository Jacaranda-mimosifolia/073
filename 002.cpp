#include<stdio.h>
int main()
{
	int n=1;
	float a=0;
	for(int i=0;i<4;i++)
	{
		float sum=0;
		printf("请输入该学生的五个科目分数：\n");
		for(int j=0;j<5;j++)
		{
			scanf("%f",&a);
			sum+=a;
		}
		printf("No.%d-- sum=%.1f ave=%.1f\n\n",n,sum,sum/5);
		n++;
	}
	
} 
