//BUBBLE SORT

#include<stdio.h>
#include<stdlib.h>

void copyArray(int * arr,int * arrCopy,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		arrCopy[i]=arr[i];
	}
}

void display(int * arr)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

int bubbleSort(int * arr,int n)
{
	int temp,flag=0,pass=0,i,j;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
			pass++;
		}
		if(!flag)
		{
			break;
		}
	}
	display(arr);
	return pass;
}

int main()
{
	int arr1[10],arr2[10],arr3[10],arrc[10],i;
	int bub1,bub2,bub3;
	for(i=0;i<10;i++)
	{
		arr1[i]=i+1;
		arr2[i]=10-i;
		arr3[i]=rand()%100+1;
	}
	printf("\nARRAY 1\n");
	display(arr1);
	printf("\nARRAY 2\n");
	display(arr2);
	printf("\nARRAY 3\n");
	display(arr3);
	printf("\nSORTING USING BUBBLE SORT\n");
	bub1=bubbleSort(arr1,10);
	printf("The passes required were: %d\n",bub1);
	bub2=bubbleSort(arr2,10);
	printf("The passes required were: %d\n",bub2);
	bub3=bubbleSort(arr3,10);
	printf("The passes required were: %d\n",bub3);
	return 0;
}
