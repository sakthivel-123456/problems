#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << " Enter the Three number : ";
    cin >> a >> b >> c;
    
    if(a>b){
        cout << a <<" is greater";
        }
    else if(b>c){
        cout << b <<" is greater";
    }else{
        cout << c <<" is greater";
    }
    

    return 0;
}