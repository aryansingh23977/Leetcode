//doing same q second time.
//Factorial of a number
#include<stdio.h>
int fact(int i,int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fact(1,n));
}
int fact(int i,int n){
    if(i>n){return 1;}
    return i*fact(i+1,n);
}