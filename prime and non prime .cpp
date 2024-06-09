#include <iostream>
using namespace std;
int main(){
    // check if a number is a prime or non prime
    int n;
    int i;
    cin>>n;
    for (i=2;i<n;i++){
        if (n%i==0){
            cout << "Non-prime"<<endl;
            break;
        }
    }
    if  (i==n){
          cout << "Prime"<<endl;
    }

    return 0;

}

