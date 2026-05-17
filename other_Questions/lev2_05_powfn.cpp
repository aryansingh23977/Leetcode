//Power function (xⁿ using recursion) Good Question
#include <iostream>
using namespace std;

int powerfn(int count,int i,int n);
int main() {
    cout<<powerfn(1,2,3)<<endl;
    return 0;
}
int powerfn(int count,int i,int n){
    
    if(count==n){
        return i;
    }
    return 2*powerfn(count+1,i,n);
}
