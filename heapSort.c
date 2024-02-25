//HEAPSORT

#include<stdio.h>
#include<stdlib.h>

int count=0;

void display(int * arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void heapify(int * arr, int n,int i)
{
	int l,r,temp,smallest=i;
	l=i*2+1;
	r=i*2+2;
	if(l<n && arr[l]<arr[smallest])
	{
		smallest=l;
	}
	if(r<n && arr[r]<arr[smallest])
	{
		smallest=r;
	}
	if(smallest!=i)
	{
		temp=arr[smallest];
		arr[smallest]=arr[i];
		arr[i]=temp;
		heapify(arr,smallest,i);
	}
	count++;
}

void heapSort(int * arr,int n)
{
	buildMinHeap(arr,n);
	int i,temp;
	for(i=n-1;i>0;i--)
	{
		temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		heapify(arr,i,0);
	}	
}

void buildMinHeap(int * arr,int n)
{
	int i;
	for(i=n/2-1;i>=0;i--)
	{
		heapify(arr,n,i);
	}
}

int main()
{
	int arr1[10],arr2[10],arr3[10],i,j,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		arr1[i]=i+1;
		arr2[i]=10-i;
		arr3[i]=rand()%50+1;
	}
	
	printf("The unsorted array is:\n");
	printf("ARRAY 1:\t");
	display(arr1,n);
	printf("The minheap array is:\n");
	buildMinHeap(arr1,n);
	display(arr1,n);
	printf("The sorted array is:\n");
	heapSort(arr1,n);
	display(arr1,n);
	printf("The number of passes is:%d\n",count);
	count=0;
	
	printf("The unsorted array is:\n");
	printf("ARRAY 2:\t");
	display(arr2,n);
	printf("The minheap array is:\n");
	buildMinHeap(arr2,n);
	display(arr2,n);
	printf("The sorted array is:\n");
	heapSort(arr2,n);
	display(arr2,n);
	printf("The number of passes is:%d\n",count);
	count=0;
	
	printf("The unsorted array is:\n");
	printf("ARRAY 3:\t");
	display(arr3,n);
	printf("The minheap array is:\n");
	buildMinHeap(arr3,n);
	display(arr3,n);
	printf("The sorted array is:\n");
	heapSort(arr3,n);
	display(arr3,n);
	printf("The number of passes is:%d\n",count);
	count=0;
	
	printf("\n");
	
	return 0;
}
