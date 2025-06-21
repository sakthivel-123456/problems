#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c;
    
    b = b*75;
    c = c*30;
    
    d = b + c;
    if(d<a){
        cout << " Boat is stable";
    }else{
        cout << " Boat will drown";
    }
    return 0;
}