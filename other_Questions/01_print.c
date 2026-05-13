//Print numbers from 1 to N
#include<stdio.h>
void print(int i, int n);
int main(){
    int i;
    scanf("%d",&i);
    print(1,i);
}
void print(int i,int n){
    if(i>n){
        return;
    }
    printf("%d\n",i);
    print(i+1,n);
}