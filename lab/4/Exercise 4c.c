#include<stdio.h>
int main() {
int n,i;
float sum=0;
printf("input n:");
scanf("%d",&n);

for(i=1; i<=n;i=i+2)
{
    sum=sum+(i*(i-1));

}
printf("Sum=%f",sum);
 return 0;
}
