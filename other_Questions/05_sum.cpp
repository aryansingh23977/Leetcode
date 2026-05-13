//Sum of digits of a number
#include <iostream>
using namespace std;
int sum(int i);
int main() {
    int i;
    cin>>i;
    cout<<"The sum is: "<<sum(i)<<endl;
    return 0;
}
int sum(int i){
    if(i==0){
        return 0;   //remember to not do mistake in base condition
    }
    int a;
    a=i%10;
    return a+sum(i/10);
}