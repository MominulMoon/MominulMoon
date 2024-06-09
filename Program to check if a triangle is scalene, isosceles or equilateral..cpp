#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Program to check if a triangle is scalene, isosceles or equilateral.

    int a,b,c;
    cout <<"Enter the sides of the triangle:";
    cin >>a >>b>>c;
    if (a==b && a==c){
        cout<< "equilateral\n";
    }
         else if (a==b|| b==c||a==c){cout<<"isosceles\n";}

                   else {cout<<"scalene\n";}



    return 0;




}
