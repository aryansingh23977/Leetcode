//Sum of first N natural numbers
#include<stdio.h>
int sum(int i,int n);
int main(){
    int i,a;
    scanf("%d",&i);
    a=sum(1,i);
    printf("%d",a);
}
int sum(int i,int n){
    if(i>n){
        return 0;
    }
    return i+sum(i+1,n);
}