#include <stdio.h>
int main()
{
    int Ram, Shyam, Ajay;
    printf("Enter the age: ");
    scanf("%d", &Ram);
    printf("Enter the age: ");
    scanf("%d", &Shyam);
    printf("Enter the age: ");
    scanf("%d", &Ajay);
    if (Ram > Shyam && Ram > Ajay)
    {
        printf("Ram is yougest man.");
    }
    if (Ram < Shyam && Shyam > Ajay)
    {
        printf("Shyam is yougest man.");
    }
    if (Ajay > Shyam && Ram < Ajay)
    {
        printf("Ajay is yougest man.");
    }
}