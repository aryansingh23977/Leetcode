//Count number of digits.
#include <iostream>
using namespace std;
int countDig(long long i,int count);
int main() {
    long long i;
    cout<<"Enter the number: ";
    cin>>i;
    cout<<"The number of digits are: "<<countDig(i,0)<<endl;
    return 0;
}
int countDig(long long i,int count){
    if(i==0){
        return count;
    }

    return countDig(i/10,count+1);

}