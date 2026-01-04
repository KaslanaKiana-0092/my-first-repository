#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void acc
{ 
    float x=0.01;
    for(int i=0;i<=31;i++)
    { 
      x=1.0*x;
    }
    printf("陌生人要給富豪:%.0f\n",x);
    int a=0,sum=0;
    while(a<31)
    {
        sum+=100*100;
        a++;
    }
    printf("富豪要給陌生人:%d\n",sum);
}
int main(void)
{
    acc(void);
    return 0;   
}
