#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
//	x = 8;
	int i;
	int isPrime = 1;	//x�������� 
	for (i=2; i<x; i++){
		if (x % i ==0 ){
			isPrime = 0;
			break;
		}
	}
	if (isPrime == 1 ){
		printf("������\n");
	}else {
		printf("��������\n");
	}
	return 0;
 } 
