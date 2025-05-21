#include<iostream>
#include<limits>
#include<climits>
using namespace std;

int main(){
    
    cout<<INT16_MIN<<endl;
    cout<<INT16_MAX<<endl;

    cout<<CHAR_MAX<<endl;
    cout<<CHAR_MIN<<endl;


    cout<<numeric_limits<int>::max()<<endl;
    cout<<numeric_limits<int>::min()<<endl;

    cout<<numeric_limits<double>::max()<<endl;
    cout<<numeric_limits<double>::min()<<endl;

    cout<<numeric_limits<bool>::max()<<endl;
    cout<<numeric_limits<bool>::max()<<endl;

   int num = 10;
   cout<<&num<<endl;

   cout<<sizeof(int)<<endl;
   cout<<sizeof(float)<<endl;
   cout<<sizeof(double)<<endl;
   cout<<sizeof(char)<<endl;
   cout<<sizeof(bool)<<endl;

   int a;
   cout<<"enter a number";
   cin>>a;
   cout<<a;

   char b;
   cin>>b;
   cout<<b;

   double c;
   cin>>c;
   cout<<c;


    return 0;
}


// tokens
// smallest entity of programm
// identifiers - varible name , fuction name, class name
// keywords - INT MAX, if , else, for , while, break
// constant - no one can change the value e.g const int = 67;
// string - sequence of character "string a = " vivek" "
// punchuator - ; , <<, >> (special symbols)
//operator - a + B , b = operand, + = operator,,, +,-,*