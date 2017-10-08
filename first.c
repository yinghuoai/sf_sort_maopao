#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10		/*** 数组大小 ***/

void bubble_sort(int* a,int len)	/*** 冒泡排序 ***/
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
		
		printf("第%d步排序效果：",i+1); /*** 输出每一次冒泡的效果 ***/
		for(k=0 ; k<len ; k++)
		{
			printf("%d ",a[k]); /*** 输出 ***/
			
		}
		
		printf("\n");
		
		
	}
	
	
	
}

int main()
{
	int shuzu[SIZE],i;
	
	srand(time(NULL));	/*** 随机种子 ***/
	
	for(i=0 ; i<SIZE ; i++)
	{
		shuzu[i] = rand()/1000 + 100;	/*** 初始化数组 ***/
	}	

	
	printf("排序前的数组为：");
	for(i=0 ; i<SIZE ; i++)
	{
		printf("%d ",shuzu[i]);
		
	}
	printf("\n");
	
	bubble_sort(shuzu,SIZE);
	
	printf("排序后的数组为：");
	for(i=0 ; i<SIZE ; i++)
	{
		printf("%d ",shuzu[i]);
		
	}
	printf("\n");
		
	
	return 0;
}












