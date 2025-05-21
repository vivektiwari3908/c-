#include<iostream>
using namespace std;
int main (){
   string web;
   cout << " enter a website name";
   cin>>web;

  if (web=="flipkart")
  {
    cout<<" wnter product or sevice :";
    cin>>web;

    if (web=="product")
    {
        cout<<"enter shoes or clothes:";
        cin>>web;

        if (web=="shoes")
        {
           cout<<"1000";
        }
        else if (web== "clothes")
        {
           cout<<"enter mens or womens";
           cin>>web;

           if (web=="mens")
           {
             cout<<"5000";
           }
           else if (web=="women")
           {
              cout<<"4000";
           }
           
           else {
            cout << "invalid";
           }
           
        }
        
    }
    else if (web=="service")
    {
       cout<<"not available";
    }
    
    else {
        cout<<"invalid";
    }
    
  }
  else {
    cout<<"Invalid";
  }
  
   
}