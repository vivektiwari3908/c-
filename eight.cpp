#include<iostream>
using namespace std;
int main (){
   int a;
   cout<<"Enter a number :";
   cin>>a;

   if (a==1)
   {
     cout<<"choose a number b/w 2, 3 ,4"
     cin>>a;
   
   

  if (a==2){ 
     cout<<"choose a number b/w 3 and 4";
     cin>>a;
     
     if (a==3)
     {
        cout<<"choose a number";
        cin>>a;
        if (a==4)
        {
           cout<<"you are in destination";
        }
        
     }
     
     if (a==4)
     {
       cout<<"you are in destination";
     }
     
  }
  if (a==3)
  {
    cout<<"choose anumber b/w 2 and 4";
    cin>>a;
  }
  if (a==4)
  {
    cout<<"you are in destination";
  }

   }
  else {
    cout << "invalid";
  }
  
}
   
