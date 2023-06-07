#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateDifference(struct Time start, struct Time end)
{
    struct Time diff;
    int startTimeInSeconds, endTimeInSeconds, differenceInSeconds;

    startTimeInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    endTimeInSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;

    differenceInSeconds = endTimeInSeconds - startTimeInSeconds;

    diff.hours = differenceInSeconds / 3600;
    diff.minutes = (differenceInSeconds % 3600) / 60;
    diff.seconds = (differenceInSeconds % 3600) % 60;

    return diff;
}

int main()
{
    struct Time startTime, endTime, difference;

    printf("Enter the start time:\n");
    printf("Hours: ");
    scanf("%d", &startTime.hours);
    printf("Minutes: ");
    scanf("%d", &startTime.minutes);
    printf("Seconds: ");
    scanf("%d", &startTime.seconds);

    printf("\nEnter the end time:\n");
    printf("Hours: ");
    scanf("%d", &endTime.hours);
    printf("Minutes: ");
    scanf("%d", &endTime.minutes);
    printf("Seconds: ");
    scanf("%d", &endTime.seconds);

    difference = calculateDifference(startTime, endTime);

    printf("\nTime difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
