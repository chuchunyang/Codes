#include <stdio.h>

#define N 5

//void reverse(int []);
//int* reverseWithReturn(int []);

int* reverseWithNew(int a[N])
{
    int temp[N];
    for(int i = 0; i < N; i++)
    {
    	temp[i] = a[N-1-i];
    }
	return temp;
}

int main()
{
	int arr[N];
	int i;
	for(i = 0; i < N; i++)
	{
	    arr[i] = i+1;
	}
	int* revArr = reverseWithNew(arr);
	for(i = 0; i < N; i++)
	{
		printf("%d ", revArr[i]);
	}
	printf("\n");
}
/*
void reverse(int a[N])
{
    int temp, i;
    for(i = 0; i < N/2; i++)
    {
		temp = a[i];
		a[i] = a[N-1-i];
		a[N-1-i] = temp;
    }
    //printf("Inside the function: %x\n", a);
}

int* reverseWithReturn(int a[N])
{
    int temp, i;
    for(i = 0; i < N/2; i++)
    {
		temp = a[i];
		a[i] = a[N-1-i];
		a[N-1-i] = temp;
    }
    return a;
}
*/


