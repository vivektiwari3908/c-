#include<iostream>
using namespace std;

int main(){
   int num,rev=0;
   cout<<"enter a number : ";
   cin>>num;
   
   while (num>0)
   {
     int last = num%10;
     rev=rev*10+last;
     num=num/10;
   }
   

  cout<<"rev: "<<rev<<endl;
}