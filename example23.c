#include<stdio.h>

int add(int arr[],int n)
        {
                int i,sum=0;
                for(i=0;i<n;i++)
                sum=sum + arr[i];
                return sum;
        }

void main()
{
	int a[5]={1,2,3,4,5};
	int b[8]={2,3,4,5,6,7,8,9};
	int c[10]={1,3,5,7,9,11,13,15,17,19};
	
	printf("Sum of elements are: %d \n",add(a,5));
	printf("Sum of elements are: %d \n",add(b,8));
	printf("sum of elements are: %d \n",add(c,10));
	
}	

