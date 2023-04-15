#include <stdio.h>
#include <stdlib.h>

    int
    main()
{
    int arr[10] , x ;

    printf("Enter Elements in array :-- \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter search element :-- ");

    scanf("%d",&x);

    
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == x)
        {
            printf("Element found in array at %d place",i+1);
            exit(0);
        }
    }

    printf("Element not found");
}