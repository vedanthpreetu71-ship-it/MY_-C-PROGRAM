#include <stdio.h>
#include<string.h>
int main() {
    char str[50],rev[50];
    printf("enter a string:");
    scanf("%s",str);
    strcpy(rev,str);
    printf("%s\n",rev);
    int a=strcmp(str,rev);
    printf("%d",a);
}
