//INSERTION SORT

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

int insertionSort(int * arr,int n)
{
	int i,j,temp,pass=0;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i;
		while(j>=1 && arr[j-1]>temp)
		{
			arr[j]=arr[j-1];
			j--;
			pass++;
		}
		arr[j]=temp;
		//pass++;
				
	}
	display(arr);
	return pass;
}

int main()
{
	int arr1[10],arr2[10],arr3[10],arrc[10],i;
	int ins1,ins2,ins3;
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
	ins1=insertionSort(arr1,10);
	printf("The passes required were: %d\n",ins1);
	ins2=insertionSort(arr2,10);
	printf("The passes required were: %d\n",ins2);
	ins3=insertionSort(arr3,10);
	printf("The passes required were: %d\n",ins3);
	return 0;
}
