#include <stdio.h>
#include <stdlib.h>

#define N 5

int * reverseDynamic(int* );

int main()
{
	int *arr = malloc(sizeof(int)*N);
	
	int i;
	for(i = 0; i < N; i++)
	{
		arr[i] = i+1;
	}
	int *x = reverseDynamic(arr);
	for(i = 0; i < N; i++)
	{
		printf("%d ", x[i]);
	}
	
	free(arr);
	arr = NULL;
	free(x);
	x = NULL;
	return 0;
}

int * reverseDynamic(int* a)
{
	int *temp = malloc(sizeof(int)*N);
	int i;
	for(i = 0; i < N; i++)
	{
		temp[i] = a[N-1-i];
	}
	return temp;
}

