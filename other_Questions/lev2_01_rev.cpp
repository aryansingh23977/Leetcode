//Reverse a number (without loop)  
#include <iostream>
using namespace std;
int rev(int i);
int main() {
    int i;
    cin>>i;
    cout<<"The Reverse number is: "<<rev(i)<<endl;
    return 0;
}

int rev(int i){
    if(i==0){return 0;}
    int a;
    a=i/10;
    return i*10
    
}