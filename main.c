#include <stdio.h>
#include <stdlib.h>
int fun(int *a,int n)
{

    int i,sum=0,j,count1=0,count2=0;
    int prime;
    int perfect;
    for(i=0; i<n; i++)
    {
        for(j=1; j<a[i]; j++)
        {
            if(a[i]%j==0 )
                sum=sum+j;
        }
        if(sum==a[i]&& a[i]>0){
            printf("%d is perfect\n",a[i]);
            count1++;}
        sum=0;
    }
      for (int i = 0; i < n; i++) {
        int flag = 1;

        if (a[i] < 2) {
            flag = 0;
        } else {
            for (int j = 2; j * j <= a[i]; j++) {
                if (a[i] % j == 0) {
                    flag = 0;  // If a divisor is found, it's not prime
                    break;
                }
            }
        }

        if (flag == 1) {
            printf("%d is prime.\n", a[i]);
            count2++;
        }
    }

printf("number of perfect numbers is %d and number of prime numbers is %d",count1,count2);
}

int main()
{
    int n,i;
    printf("size of array is:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    fun(a,n);


}
