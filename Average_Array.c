// #include <stdio.h>
// int main() {
//     int n, i;
//     float num[100], sum = 0.0, avg;

//     printf("Enter the numbers of elements: ");
//     scanf("%d", &n);

//     while (n > 100 || n < 1) {
//         printf("Error! number should in range of (1 to 100).\n");
//         printf("Enter the number again: ");
//         scanf("%d", &n);
//     }

//     for (i = 0; i < n; ++i) {
//         printf("%d. Enter number: ", i + 1);
//         scanf("%f", &num[i]);
//         sum += num[i];
//     }

//     avg = sum / n;
//     printf("Average = %.2f", avg);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("C:\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;
}
