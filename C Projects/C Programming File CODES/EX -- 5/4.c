// Certainly !Here's an example of a C program that demonstrates the use of conditional compilation using #ifdef, #else, and #endif directives:

#include <stdio.h>

#define OPTION_A

int main()
{
#ifdef OPTION_A
    printf("Option A is selected.\n");
#else
    printf("Option A is not selected.\n");
#endif

#ifdef OPTION_B
    printf("Option B is selected.\n");
#else
    printf("Option B is not selected.\n");
#endif

    return 0;
}
