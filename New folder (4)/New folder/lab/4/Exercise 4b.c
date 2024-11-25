#include<stdio.h>
int main() {
    int n,i;
float sum=0;
printf("input n:");
scanf("%d",&n);

for(i=1; i<=n;i++)
{
    sum=sum+(1.0/i);

}
printf("Sum=%f",sum);
 return 0;
}
