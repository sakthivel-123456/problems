#include <iostream>
using namespace std;
int main()
{
    int a,b;
   
    cin >> a >> b;
    
    if(a>0 && b>0){
        cout << "Ist Quardant";
    }else if(a<0 && b>0){
        cout << "IInd Quardant";
        }else if(a<0 && b<0){
        cout << "IIIrd Quardant";
    }else{
        cout << "IVth Quardant";
    }
    
    

    return 0;
}