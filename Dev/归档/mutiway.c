#include <stdio.h>

int main()
{
	int type;
	
	scanf("%d",&type);
	
	/*
	if ( type==1 )
	    printf("���");
	else if ( type==2 )
	    printf("���Ϻ�");
	else if ( type==3 )
	    printf("���Ϻ�");
	else if ( type==4 )
	    printf("�ټ�");
	else
	    printf("����ʲô����");
	*/
	
	switch( type ){
		case 1:
			printf("���");
			break;
		case 2:
		    printf("���Ϻ�");
			break;
		case 3:
		    printf("���Ϻ�");
			break;
		case 4:
		    printf("�ټ�");
			break;
		default:
		    printf("����ʲô����");
			break;
			 } 
	return 0;

}
