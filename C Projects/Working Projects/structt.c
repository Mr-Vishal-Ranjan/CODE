#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    char clg[40];
    float score;
};

int main(){

    struct student students[100];

    for (int i = 0; i < 100; i++)
    {
        printf("Student %d:\n", i + 1);

        printf("Roll No.: ");
        scanf("%d", &students[i].roll);

        printf("Name: ");
        scanf(" %[^\n]s",&students[i].name);

        printf("Collage: ");
        scanf(" %[^\n]s", &students[i].clg);
        
        printf("score: ");
        scanf("%3f", &students[i].score);

        printf("\n");
    }
    
    for (int i = 0; i < 100; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Roll no.: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("College: %s\n", students[i].clg);
        printf("Score %f",students[i].score);
        printf("\n");
    }
    

}