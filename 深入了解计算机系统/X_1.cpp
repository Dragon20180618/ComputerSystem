#include<stdio.h>
#include<stddef.h>
#include<stdint.h>

//void show_int (int x);
//void show_float (float x);
//void show_bytes (unsigned char * ,size_t len);
//void show_test (int val);
typedef unsigned char *byte_pointer;

void show_bytes (byte_pointer start, size_t len )
{
    size_t i;
    for(i = 0; i < len; i++)
        printf(" %.2x",start[i]);
    printf("\n");
}

void show_int (int x)
{
    show_bytes ((byte_pointer)&x, sizeof (int ));
}

void show_float (float x)
{
    show_bytes ((byte_pointer)&x, sizeof (float ));
}

void show_pointer(void *x)
{
    show_bytes ((byte_pointer)&x, sizeof (void * ));
}

void show_test (int val )
{
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;
    show_int (ival);
    show_float (fval);
    show_pointer (pval);
}

int main()
{
   // int i = 0x0123;
   int i;
    scanf("%d",&i);
    show_test(i);
    return 0;
}
