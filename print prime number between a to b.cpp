#include <iostream>
using namespace std;
int main(){
    int a,b,c,i;
    cin>> a>> b;
    for (c=a;c<=b;c++){
        for (i=2;i<c;i++){
            if (c%i==0){
                break;
            }
        }
        if(i==c){
            cout << c <<endl;
        }
    }
    return 0;
}
