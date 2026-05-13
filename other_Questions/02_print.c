//Print numbers from N to 1
#include<stdio.h>
void print(int i);
int main(){
    int i;
    scanf("%d",&i);
    print(i);
}
void print(int i){
    if(i<=0){
        return;
    }

    printf("%d\n",i);
    print(i-1);


}