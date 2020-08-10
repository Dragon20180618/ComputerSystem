#include<stdio.h>
int add_(int *a,int*b);
void whoami();
int main(void){
    int a=1,b=2;
    int c=add_(&a,&b);
    printf("%d\n",c);
    whoami();
    return 0;
}