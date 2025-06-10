//9. Write a C program to find the square root of a number.
  #include <stdio.h>
#include<math.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);

int main() {
    float n,sqrroot;
    n=input();
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}
float input(){
    float n;
    printf("Enter number:");
    scanf("%f",&n);
    return n;
}
float square_root(float n){
    float sqroot;
    sqroot=sqrt(n);
    return sqroot;
}
void output(float n, float sqrroot){
    printf("Square root of %.2f is %.4f\n",n,sqrroot);
}
