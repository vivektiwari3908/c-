#include<iostream>
using namespace std;

int main(){
   int num;
   int i;
   int count=0;
   cout<<"Enter a number";
   cin>>num;

   for (i = 1; i<=num; i++)
   {
     if (num%i==0)
     {
       count++;
     }
     
   }
   if (count==2)
   {
     cout<<"prime no";
   }
   else{
    cout<<"not a prime no";
   }
   
}
