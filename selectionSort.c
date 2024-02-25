//SELECTION SORT

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

int selectionSort(int * arr,int n)
{
	int min=0,temp,i,j,pass=0;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
		pass++;
	}
	display(arr);
	return pass;
}

int main()
{
	int arr1[10],arr2[10],arr3[10],arrc[10],i;
	int sel1,sel2,sel3;
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
	printf("\nSORTING USING SELECTION SORT\n");
	sel1=selectionSort(arr1,10);
	printf("The number of passes required were: %d\n",sel1);
	sel2=selectionSort(arr2,10);
	printf("The number of passes required were: %d\n",sel2);
	sel3=selectionSort(arr3,10);
	printf("The number of passes required were: %d\n",sel3);
	return 0;
}
