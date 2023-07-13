//1 printf first n nattural numbers
// #include <stdio.h>
// void print(int n);
//  int main(){
//     int x;
//     printf("Enter a number : ");
//     scanf("%d",&x);
//     print(x);
//     return 0;
//  }
//  void print(int n){
//     if(n>0){
//          print(n-1);
//          printf("%d\t",n);
//     }
    
//  }



//2
// #include <stdio.h>
// void printrev(int n);
//  int main(){
//      int x;
//      printf("Enter a number : ");
//      scanf("%d",&x);
//      printrev(x);
//      return 0;
//  }
//  void printrev(int n){
//     if(n>0){
//         printf("%d\t",n);
//         printrev(n-1);
//     }
//  }






//3
// #include <stdio.h>
// void print(int);
// int main(){
//     int a;
//     printf("Enter number : ");
//      scanf("%d",&a);
//      print(a);
//      return 0;
// }
// void print(int n){
//     if(n>0){
//         print(n-1);
//         printf("%d\t",2*n-1);
//     }
// }




//4
// #include <stdio.h>
// void print(int);
// int main(){
//     int a;
//     printf("Enter number : ");
//      scanf("%d",&a);
//      print(a);
//      return 0;
// }
// void print(int n){
//     if(n>0){
//         printf("%d\t",2*n-1);
//         print(n-1);
//     }
// }




//5
// #include <stdio.h>
// void print(int);
// int main(){
//     int a;
//     printf("Enter number : ");
//      scanf("%d",&a);
//      print(a);
//      return 0;
// }
// void print(int n){
//     if(n>0){
//         print(n-1);
//         printf("%d\t",2*n);
//     }
// }



//6
// #include <stdio.h>
// void print(int);
// int main(){
//     int a;
//     printf("Enter number : ");
//      scanf("%d",&a);
//      print(a);
//      return 0;
// }
// void print(int n){
//     if(n>0){
//         printf("%d\t",2*n);
//         print(n-1);
//     }
// }



//7
// #include <stdio.h>
//  void printsquare(int);
//  int main(){
//      int a;
//      printf("Enter a number : ");
//       scanf("%d",&a);
//       printsquare(a);
//       return 0;
//  }
//  void printsquare(int n){
//      if(n>0){
//         printsquare(n-1);
//         printf("%d\t",n*n);
//      }
//  }




//8
// #include <stdio.h>
// void dtob(int);
//  int main(){
//     int a;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     dtob(a);
//     return 0;
//  }
//  void dtob(int n){
//     if(n>0){
//         dtob(n/2);
//          printf("%d",n%2);
//     }
//  }





//9
// #include <stdio.h>
// void dtoO(int);
//  int main(){
//     int a;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     dtoO(a);
//     return 0;
//  }
//  void dtoO(int n){
//     if(n>0){
//         dtoO(n/8);
//          printf("%d",n%8);
//     }
//  }






//10
// #include <stdio.h>
//  void printreverse(int);
//  int main(){
//      int a;
//      printf("Enter a number : ");
//       scanf("%d",&a);
//       printreverse(a);
//       return 0;
//  }
//  void printreverse(int n){
//     if(n>0){
//         printf("%d",n%10);
//         return printreverse(n/10);
//     }
//  }