//Reverse a number (without loop).  **Revise this problem**
#include <iostream>
using namespace std;
int reverse(int i, int rev);
int main() {
    int i;
    cin>>i;
    cout<<"The Reverse number is: "<<reverse(i,0)<<endl;
    return 0;
}

int reverse(int i, int rev){
    if(i==0){return rev;}
    return reverse(i/10,rev*10+i%10);
}