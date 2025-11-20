#include<stdio.h>
#include<string.h>
int main(){
    int *p;
    int a=10;
    *p=a;
    printf("%p\n",&a);
    printf("%p\n",&p);
    printf("%d\n",&a);
    printf("%d\n",&p);
}
