#include<stdio.h>

//����һ���ͺ��� 
void sum(int begin, int end) //����ͷ ���������� �������������� 
{
	int i;
	int sum =0;
	for( i=begin; i<=end; i++) {
		sum +=i;
	}
	printf("��%d��%d�����ĺ���%d\n", begin, end, sum);
 } 
 
 //ʹ�� 
 int main()
 {
 	int a;
	int b;
	printf("��������ͷ�Χa��b\n");
	scanf("%d%d",&a,&b);
 	sum(a,b);
	sum(20,50); 
 	return 0;
 }
