//6. Write a C program to compare three numbers using pass by reference
#include <stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main() {
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}
int input(int *a, int *b, int *c){
    printf("Enter the three number: ");
    scanf("%d %d %d",a,b,c);
    return 0;
}
void compare(int a, int b, int c, int *largest){
    if(a>b){
        if(a>c)
            *largest=a;
        else
            *largest=c;
    }
    else if(b>c)
        *largest=b;
    else 
        *largest=c;
}
void output(int a, int b, int c, int largest){
    printf("Largest of %d, %d and %d is %d",a,b,c,largest);
}
