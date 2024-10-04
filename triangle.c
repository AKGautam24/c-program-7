#include<stdio.h>
   void main() {
    int a,b,c;
    printf("enter the three angles of the triangle\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a+b+c==180){
    printf("its a triangle");
    }else {
        printf("its not a triangle");
    }

   }