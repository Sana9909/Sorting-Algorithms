//RADIX SORT

#include<stdio.h>
#include<stdlib.h>

int getMax(int * arr,int n)
{
	int i,max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}

void display(int * arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void countingSort(int * arr,int n,int place)
{
	int size,i;
	int * result=(int * )malloc(sizeof(int)*n);
	//printf("The original array is:");
	//display(arr,n);
	int * countArr=(int *)malloc(sizeof(int)*10);
	for(i=0;i<n;i++)
	{
		countArr[i]=0;
	}
	for(i=0;i<n;i++)
	{
		countArr[(arr[i]/place)%10]++;
	}
	//printf("The count array is:");
	//display(countArr,10);
	int * cumCountArr=(int *)malloc(sizeof(int)*10);
	cumCountArr[0]=countArr[0];
	for(i=1;i<10;i++)
	{
		cumCountArr[i]=countArr[i]+cumCountArr[i-1];
	}
	//printf("The cumulative count array is:");
	//display(cumCountArr,10);
	for(i=n-1;i>=0;i--)
	{
		result[--cumCountArr[(arr[i]/place)%10]]=arr[i];
	}
	for(i=0;i<n;i++)
	{
		arr[i]=result[i];
	}
	printf("\n");
}

void radixSort(int * arr,int n)
{
	int max=getMax(arr,n),place;
	for(place=1;max/place>0;place*=10)
	{
		countingSort(arr,n,place);
	}
}
	

int main()
{
	int arr1[10],arr2[10],arr3[10],arrc[10],i;
	int count1,count2,count3;
	for(i=0;i<10;i++)
	{
		arr1[i]=i+1;
		arr2[i]=10-i;
		arr3[i]=rand()%100+1;
	}
	int n=10;
	printf("\nARRAY 1\n");
	display(arr1,n);
	printf("\nARRAY 2\n");
	display(arr2,n);
	printf("\nARRAY 3\n");
	display(arr3,n);
	printf("\nSORTING USING RADIX SORT\n");
	radixSort(arr1,n);
	printf("\nARRAY 1\n");
	display(arr1,n);
	//printf("The passes required were: %d\n",bub1);
	radixSort(arr2,n);
	printf("\nARRAY 2\n");
	display(arr2,n);
	//printf("The passes required were: %d\n",bub2);
	radixSort(arr3,n);
	printf("\nARRAY 3\n");
	display(arr3,n);
	//printf("The passes required were: %d\n",bub3);
	return 0;
}
	
