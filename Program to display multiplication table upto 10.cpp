#include <iostream>
using namespace std;
int main(){
    //Program to display multiplication table upto 10.
    int n,i;
    cout <<"Enter a positive integer:";
    cin >> n;
    for(i=1;i<=10;i++){

    cout<< i << "*" << n << "=" << i*n <<endl;
    }
     return 0;
}
