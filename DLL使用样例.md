```c
#include <windows.h>
#include"p.h"
#include<stdio.h>
// #include<iostream>
typedef int (*AddFunc)(int a, int b);
int main(void){
    HMODULE hDll = LoadLibrary("../lib/add.dll");
    // printf("OK");
    AddFunc add = (AddFunc)GetProcAddress(hDll, "add");
    printf("%d\n",add(2,2));
    FreeLibrary(hDll);
}
```
