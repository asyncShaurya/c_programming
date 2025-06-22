//WAP to read three integers from a file.
#include<stdio.h>

int main(){
    int a,b,c;
    FILE *ptr;
   ptr = fopen("integer.txt", "r");
   fscanf(ptr, "%d %d %d", &a, &b, &c);
   printf("The value of the integers are %d %d %d \n", a ,b ,c);
   return 0;
    
}