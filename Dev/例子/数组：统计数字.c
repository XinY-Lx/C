#include<stdio.h>

int main()
{
	const int number = 10;//����Ĵ�С 
	int x;
	int count[number];//�������� 
	int i;
	
//	��ʼ������ 
	for ( i=0; i<number; i++ ){
		count[i]=0;
	}
	printf("�����벻����10��0-9֮���������Ȼ������-1����\n"); 
	scanf("%d", &x);
	while(x!=-1){
		if( x>=0 && x<=9 ){
			count[x]++;     //����������� 
		}
		scanf("%d", &x);
	}
	//����������� 
	for ( i=0; i<number; i++ ){
		printf("%d�ĸ�����:%d\n", i, count[i]);
	}
	// 
	return 0; 
}
