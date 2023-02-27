#include <stdio.h>
#include <string.h>
int main(){
    int i;
    int str[10000];
    printf("Enter the number \n");
    scanf("%s",str);
    printf("length of str is %ld",strlen(str));
    return 0;
}