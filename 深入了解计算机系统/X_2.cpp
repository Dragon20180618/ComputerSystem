#include<stdio.h>
#include<stddef.h>
#include<stdint.h>
typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start,size_t len)
{
    size_t i;
    for(i = 0 ; i < len ; i++)
    {
        printf(" %.2x ",start[i]);
    }
    printf("\n");
}
void show_int(int x)
{
    show_bytes((byte_pointer) &x,sizeof(int));
}
void show_float(float x)
{
    show_bytes((byte_pointer) &x,sizeof(float));
}
void show_pointer(void *x)
{
    show_bytes((byte_pointer) &x,sizeof(void *));
}
int main()
{
    int x;
    scanf("%d",&x);
    float i_x=(float)x;
    int *PO=&x;

    show_int(x);
    show_float(i_x);
    show_pointer(PO);
    return 0;
}
