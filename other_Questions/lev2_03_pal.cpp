
//Check if a number is palindrome
#include <iostream>
using namespace std;
int pal(int i, int rev);
int main() {
    int i;
    cout<<"Enter a number: ";
    cin>>i;
    if(pal(i,0)==i){
        cout<<"is Palindrome!!\n";
    }
    else{
        cout<<"Not a Palindrome!!\n";
    }
    return 0;
}
int pal(int i, int rev){
    if(i==0){
        return rev;
    }
    return pal(i/10,rev*10+i%10);
}