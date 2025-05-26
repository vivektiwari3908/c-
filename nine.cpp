#include<iostream>
using namespace std;
int main(){
// week days
    int week;
    cout<<"Enter yor week number";
    cin>>week;

    switch (week)
    {
    case 1:
    cout<<"monday";
    break;

    case 2:
    cout<<"tuesday";
    break;

    case 3:
    cout<<"wednesdy";
    break;

    
    case 4:
    cout<<"thursday";
    break;

    case 5:
    cout<<"friday";
    break;

    case 6:
    cout<<"saturday";
    break;

    case 7:
    cout<<"sunday";
    break;

    default:
    cout<<"invalid";
    }
}