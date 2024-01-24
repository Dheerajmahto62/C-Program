#include<stdio.h>
int main()
// {
//     int i=0,j=0;
//     while(i<4,j<5)
//     {
//         i++;
//         j++;
//     }
//     printf("%d,%d\n",i,j);
//     return 0;
// }

// {
//     int i=0,j=0;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<5;j++)
//         {
//             if(i>0)
//             continue;
//             printf("Hello\n");
//         }
//     }
// }

// {
//     int a =1;
//     // if(a--)
//     // printf("True\n");
//     // if(a++)
//     // printf("False\n");
//     //a--;
//     ++a;
//     printf("%d",a);
// }

// {
//     int i=0;
//     if(i==0)
//     {
//         i=i+1;
//         break;
//     }
//     printf("%d",i);
//     return 0;
// }

// {
//     int k= 0;
//     for(;;k++)
//     {
//         printf("Hello");
//         if(k%10==0)
//         break;
//     }
//     return 0;
// }

// {
//     int k,j;
//     for(k=0;k<=10;k+=2)
//     {
//         for(j=1;j!=k;j=j+1)
//         {
//             printf("Hello \n");
//             break;
//         }
//     }
//     return 0;
// }

// {
//     int x;
//     x=4<8 ?5!=1<5==0?1:2:3;
//     printf("%d",x);
//     return 0;
// }

{
    int a=0,i=0,b;
    for(i=0;i<5;i+=0.5)
    {
        a++;
        continue;
    }
    printf("%d",a);
    return 0;
}