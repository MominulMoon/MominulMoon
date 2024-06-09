#include <iostream>
using namespace std;
int main (){
//Break and Continue statement
int date=1;
int pocketmoney=3000;
for(date;date<=31;date++){

    if (date%2==0){
        continue;
    }
    if (pocketmoney==0){
        break;
    }


    cout <<" can go on: "<< date <<endl;
    pocketmoney= pocketmoney-300;
}
return 0;
}
