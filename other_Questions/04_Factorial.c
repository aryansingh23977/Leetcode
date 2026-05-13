//Print factorial using recursion.
#include<stdio.h>
int fact(int i,int n);
int main(){
    int i,a;
    printf("Enter the number: ");
    scanf("%d",&i);
    a=fact(1,i);
    return a;
}
int fact(int i, int n){
    if(i>n){
        return 1;
    }
    return i*fact(i+1,n);
}