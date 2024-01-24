// //1+2+3+4+5+.......+ nth term.

#include<stdio.h>
#include<math.h>
int main ()
{
    int n , sum;
    scanf("%d", &n);
    for ( int i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf( "sum is : %d",sum);
}

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int status;
//     char fname[20];
//     printf("Enter FileName: ");
//     gets(fname);
//     status = remove(fname);
//     if(status==0)
//         printf("\nFile deleted successful!");
//     else
//         printf("\nUnable to delete file!");
//     getch();
//     return 0;
// }