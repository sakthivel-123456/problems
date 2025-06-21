#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a;
    
    if(a<=200){
        b=a*0.5;
        cout << b;
    }else if(a<=400){
        b=(a*0.65)+100;
        cout << b;
    }else if(a<=600){
        b=(a*0.80)+200;
        cout << b;
    }else {
         b=(a*1.25)+425;
         cout << b;
    }
    
    return 0;
}