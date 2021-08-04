#include <stdio.h>







void printint(void* data){
    int* num = (int*)data;
    if(num == NULL) return;
    printf("%d ",*num);
}

void printfloat(void* data){
    float* floatnum = (float*)data;
    if(floatnum == NULL) return;
    printf("%d ",*floatnum);
}

void printchar(void* data){
    char* character = (char*)data;
    if(character == NULL) return;
    printf("%c ",*character);
}

