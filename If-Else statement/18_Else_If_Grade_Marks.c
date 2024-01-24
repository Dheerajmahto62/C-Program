#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    if (marks > 90 && marks < 100)
    {
        printf("Excellent");
    }
    else if (marks > 80 && marks < 90)
    {
        printf("Very good");
    }
    else if (marks > 70 && marks < 80)
    {
        printf("Good");
    }
    else if (marks > 60 && marks < 70)
    {
        printf("You can do better");
    }
    else if(marks>50 && marks<60)
    {
        printf("Average");
    }
    else if(marks>40 && marks<50)
    {
        printf("Below Average");
    }
    else{
        printf("fail");
    }
}