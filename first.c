#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10		/*** �����С ***/

void bubble_sort(int* a,int len)	/*** ð������ ***/
{
	int i,j,k,temp;
	
	for(i=0 ; i<len-1 ; i++)
	{
		for(j=len-1 ; j>i ;j--)
		{
			if(a[j-1] > a[j] )
			{
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] =  temp;
				
			}
			
		}
		
		printf("��%d������Ч����",i+1); /*** ���ÿһ��ð�ݵ�Ч�� ***/
		for(k=0 ; k<len ; k++)
		{
			printf("%d ",a[k]); /*** ��� ***/
			
		}
		
		printf("\n");
		
		
	}
	
	
	
}

int main()
{
	int shuzu[SIZE],i;
	
	srand(time(NULL));	/*** ������� ***/
	
	for(i=0 ; i<SIZE ; i++)
	{
		shuzu[i] = rand()/1000 + 100;	/*** ��ʼ������ ***/
	}	

	
	printf("����ǰ������Ϊ��");
	for(i=0 ; i<SIZE ; i++)
	{
		printf("%d ",shuzu[i]);
		
	}
	printf("\n");
	
	bubble_sort(shuzu,SIZE);
	
	printf("����������Ϊ��");
	for(i=0 ; i<SIZE ; i++)
	{
		printf("%d ",shuzu[i]);
		
	}
	printf("\n");
		
	
	return 0;
}












