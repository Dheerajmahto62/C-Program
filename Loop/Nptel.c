// #include<stdio.h>
// int main()
// {
//  int i=8; int j=5;int k=0;
//  x = 3<2 ? printf("5"): printf("3");
//  printf("%d", x);.
//  k=(j>5)?(i<5)?i-j:j-i:k-j;
//  i-=(k)?(i)?(j):(i):(k);

//  return 0;
// }

// #include <stdio.h>
// int main()
// {
//  int a = 100, b = 200, c = 300;
//  if (c > b > a)
//  printf("TRUE");
//  else
//  printf("FALSE");
// float q = 'x';
// printf("%.5f", q);

// int i = 0, j = 0;
//  while (i < 4, j < 5)
//  {
//  i++;
//  j++;
//  }
//  printf("%d, %d\n", i, j);
//  return 0;
// }

// #include <stdio.h>
// int main()
// {
//  int i = 0;
//  int j = 0;
//  for (i = 0; i < 4; i++)
//  {
//  for (j = 0; j < 6; j++)
//  {
//  if (i > 0)
//  continue;
//  printf("Hello \n");
//  }
//  }
// return 0;
// }

// #include <stdio.h>
// int main()
// {
//  int a = 1;
//  if (a--)
//  printf("True\n");
//  if (++a)
//  printf("False\n");
//  return 0;
// }

// #include <stdio.h>
// int main()
// {
//  int i = 0;
//  while(i==0)
//  {
//  i=i+1;
//     break;
//  }
//  printf("%d", i);
//  return 0;
// }

// #include <stdio.h>
// int main()
// {
//  int k = 0;
//  for (;; k++)
//  {
//  printf("Hello");
//  if(k%10==0)
//  break;
//  }
//  return 0;
// }

#include <stdio.h>
int main()
{
    //  int a = 0, i = 0, b;
    //  for (i = 0; i < 5; i+=0.5)
    //  {

    //  continue;

    // int myArray[] = {1, 2, 3, 4, 5};
    // printf("%d", myArray[4]);
    // int i;
    //  int arr[3] = {1 ,3 ,4};
    //  for (i = 0; i < 3; i++)
    //  printf("%d ", arr[i]);

    struct insti
    {
        int x = 2;
        char ins[] = "IIT";
    };
    struct insti s1;
    printf("%d", s1.ins);
    printf("%d", s1.x);
    return 0;
}
