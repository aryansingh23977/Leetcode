//Find GCD of two numbers (Euclid)
#include <iostream>
using namespace std;

int gcd(int x, int y);
int main() {
    int x,y;
    cout<<"Enter the two numbers: ";
    cin>>x>>y;
1
    cout<<"The GCD is: "<<gcd(x,y);
    cout<<endl;
    return 0;
}
int gcd(int x, int y){
    if(y==0){
        return x;
    }
    return gcd(y,x%y);
}