#include<iostream>
using namespace std;

int nain(){

// calculator
int a,b;
int op;
cout<<"enter your first number";
cin>>a;
cout<< " enter your second number";
cin>>b;


cout<<"+ - * / %";
cin>>op;

switch (op) 
{
case '+':
cout<<"a+b";
break;

case '*':
cout<<"a*b";
break;

case '/':
cout<<"a/b";
break;

case '%':
cout<<"a%b";
break;

default :
cout<<"invalid";

}
}