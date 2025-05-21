#include<iostream>
using namespace std;
int main(){
   
    int a;
    cout<<"enter a unit no ";
    cin>>a;

    if (a>0 && a<=50)
    {
      cout<<a*5;

    }
    else if (a>50 && a<=100)
    {
       cout<< (50*5 + ((a-50) * 10));
    }
    else if (a>100 && a<=200)
    {
       cout<< (50*5 + ((100-50)*10 )* ((a-100)*15));
    }
    

}
