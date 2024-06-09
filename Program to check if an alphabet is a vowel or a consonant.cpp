#include <iostream>
using namespace std ;
int main(){
 //Program to check if an alphabet is a vowel or a consonant.
 char m;
 cin>> m;
 int big,small;

      small=(m=='a'||m=='e'||m=='i'||m=='o'||m=='u');
      big=(m=='A'||m=='E'||m=='I'||m=='O'||m=='U');

      if (small||big)
        cout<< "Vowel"<<endl;
        else
            cout << "Consonant" <<endl;

        return 0;



}
