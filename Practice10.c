// find it is lowercase or not 
//ASCII value 97-122
#include <stdio.h>
#include <conio.h>
int main (){
    char ch;
    printf("Enter the character \n");
    scanf("%c",&ch);
    if(ch<=122 && ch>= 97){
        printf("It is lowercase");
    }
    else{
        printf("It is not lowercase");
    }
    return 0;
}