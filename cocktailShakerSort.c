//COCKTAIL SHAKER SORT

#include<stdio.h>
#include<stdlib.h>

void display(int * arr)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

int cocktailShakerSort(int * arr,int n)
{
	int i,j,k=0,temp,pass=0,flag;
	do
	{
		flag==0;
		for(i=k;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
			flag=1;
		}
		if(!flag)
		{
			break;
		}
		pass++;
		flag=0;
		for(j=i-1;j>=k+1;j--)
		{
			
			if(arr[j]<arr[j-1])
			{
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
			flag=1;
		}
		k++;
		if(!flag)
		{
			break;
		}
	}while(flag);
	display(arr);
	return pass;
}

int main()
{
	int i,css1,css2,css3;
	int arr1[10],arr2[10],arr3[10];
	for(i=0;i<10;i++)
	{
		arr1[i]=i+1;
		arr2[i]=10-i;
		arr3[i]=rand()%50+1;
	}
	printf("ARRAY 1:\n");
	display(arr1);
	printf("ARRAY 2:\n");
	display(arr2);
	printf("ARRAY 3:\n");
	display(arr3);
	printf("\nARRAY AFTER COCKTAIL SHAKER SORT\n");
	printf("ARRAY 1:\n");
	css1=cocktailShakerSort(arr1,10);
	printf("The number of passes required were: %d\n",css1);
	printf("ARRAY 2:\n");
	css2=cocktailShakerSort(arr2,10);
	printf("The number of passes required were: %d\n",css2);
	printf("ARRAY 3:\n");
	css3=cocktailShakerSort(arr3,10);
	printf("The number of passes required were: %d\n",css3);
	return 0;
}
		
