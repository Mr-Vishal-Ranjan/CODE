#include <stdio.h>

int main(){

    int n  ;

    printf("Enter a Number :-- ");
    scanf("%d",&n);

    if (n % 2 == 0 && (n > 1 && n < 6 || n > 20))
    {
        printf("Not Weird\n");
    }

    else
    {
        printf("Wired\n");
    }
    return 0 ;

}

