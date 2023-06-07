#include <stdio.h>

struct Distance
{
    int feet;
    int inches;
};

struct Distance addDistances(struct Distance d1, struct Distance d2)
{
    struct Distance sum;
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    if (sum.inches >= 12)
    {
        sum.feet++;
        sum.inches -= 12;
    }

    return sum;
}

int main()
{
    struct Distance distance1, distance2, sum;

    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%d", &distance1.inches);

    printf("\nEnter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%d", &distance2.inches);

    sum = addDistances(distance1, distance2);

    printf("\nSum of distances:\n");
    printf(" %d Feet ", sum.feet);
    printf("%d Inches", sum.inches);

    return 0;
}
