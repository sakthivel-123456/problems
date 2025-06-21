#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a;
    b=a*a;
    c=b%10;
    
    if(c==a){
        cout << "Automorphic Number";
    }else{
        cout << "Not Automorphic Number";
    }
    
    return 0;
}