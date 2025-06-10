//8. Write a C program to find sum of n different numbers entered by the user.
#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main() {
    int n,a[10],sum;
    n=input_array_size();
    input_array(n,a);
    sum=sum_n_array(n,a);
    output(n,a,sum);
    return 0;
}
int input_array_size(){
    int n;
    printf("Input array size:");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n]){
    int i;
    printf("Input the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int sum_n_array(int n, int a[n]){
    int sum=0,i;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    return sum;
}
void output(int n,int a[n],int sum){
    int i;
    for(i=0;i<n-1;i++){
        printf("%d+",a[i]);
    }
    printf("%d is %d\n",a[i],sum);
}
