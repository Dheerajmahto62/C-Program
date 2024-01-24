//  scanf("%d%d%d",&a,&b,&c);
//   }
//   #include<stdio.h>
//  	 int a,b,c;
// 	printf("%d + %d = %d ",a,b,c); 
//   void main(){
//       #include<stdio.h>
//    void main(){
//        int a,b,c;
//        scanf("%d%d%d,"&a,&b,&c);
//        printf("a + b = c ");
//   }


// #include<stdio.h>
// int main()
// {
//  scanf("%d%d%d",&a,&b,&c);
//   }


// //   #include<stdio.h>
// //  	 int a,b,c;
// // 	printf("%d + %d = %d ",a,b,c); 
// //   void main(){we
// //  #include<stdio.h>
// //    void main(){
// //        int a,b,c;
// //        scanf("%d%d%d,"&a,&b,&c);
// //        printf("a + b = c ");
// //    }


//  #include<stdio.h>
//   void main(){
//       int a,b,c;
//       scanf("%d%d%d",&a,&b,&c);
//       printf("a + b = c ",a,b,c);
//   }


//   #include<stdio.h>
//   void main(){
//       int a,b;
//       scanf("%d%d%d",&a,&b,&c);
//       printf("%d",a+b+c);
//   }


//   #include<stdio.h>
//   void main(){
//       int a,b,c;
//       scanf("%d%d%d",&a,&b,&c);
//       printf("%d+%d+%d=%d",a,b,c,a+b+c);
//   }

//   #include<stdio.h>
//    void main(){
//        int a,b,c;
//        scanf("%d%d%d",&a,&b,&c);
//        printf("%d+%d+%d=%d",a,c,b,a+b+c);
//    }

// #include <stdio.h>
// int main(){
// int i = 0;
// do{
// printf("Hello");
// } while (i != 0);
// return 0;
// }

#include<stdio.h>
int main() {
 int sum=0,i;
 for(i=1;i<=10;i++) {
 sum=sum+i;
 if(i==10)
 goto addition;
 if(i==5)
 goto number;
 }
 addition:
 printf("%d\n",sum);
 number:
 printf("%d",i);
 return 0;
}

// #include <stdio.h>
// void main(){
//  int i;
//  int egArray[] = { 2, 4, 6, 8, 10, 1, 3, 5, 7, 9 };
//  for ( i= 0 ; i < 10 ; i = i + 2 )
//  printf("%d ",egArray[i]);
// }