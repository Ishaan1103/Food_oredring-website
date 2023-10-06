#include <stdio.h>
#include<time.h>
int gcd(int a, int b){
int temp;
while(b!=0)
{
    temp = b;
    b=a%b;
    a=temp;
}
return a;
}
int main()
{
    int a;
    int b;
    clock_t start,end;
    int result;
    double time_taken;
    printf("Enter the value of a and b\n");

    scanf("%d",&a);

    scanf("%d",&b);

    start=clock();

    result=gcd(a,b);

    end=clock();

    time_taken=((double)(end-start))/CLOCKS_PER_SEC;

    printf("GCD of %d and %d is: %d\n",a,b,result);

    printf("time taken to compute GCD: %lf second\n",time_taken);

    return 0;
}