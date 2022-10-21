#include <stdio.h>
#define N 5

int* reverse(int []);

int main()
{
    int x[N] = {2,4,6,8,10};
    int *y = reverse(x);
    int i;
    for(i = 0; i < N; i++)
    {
        printf("%d ", *(y+i));
    }

}

int* reverse(int a[N])
{
    int temp[N], i;
    for(i = 0; i < N; i++)
    {
         temp[i] = a[N-i-1];
    } 
    return temp;                                     // temp: 10 8 6 4 2
}

