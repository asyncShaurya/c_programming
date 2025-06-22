//Sum first 10 natural number 
#include<stdio.h>
int main(){
    int i, sum =0,n;
    printf("Enter the number \n");
    scanf("%d",&n);
    for (i=0; i<=n; i++){
      sum +=i;
    }
    printf("The value of sum of the given number is %d",sum);
    return 0;

}