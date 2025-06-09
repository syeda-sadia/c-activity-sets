//5. Write a C program to compare three numbers using pass by value
#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main() {
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}
int input(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    return x;
}
int compare(int a, int b, int c){
    if(a>b){
        if(a>c)
            return a;
        else
            return c;
    }
    else if(b>c)
        return b;
    else 
        return c;
}
void output(int a, int b, int c, int largest){
    printf("Largest of %d, %d and %d is %d",a,b,c,largest);
}
