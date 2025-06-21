
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    int m,n,l;
    cin >>a >>b>>c>>d>>e>>f;
    m=a*b;
    n=(c*d)+(e*f);
    if(m>n){
        cout<<"Raj can fix both painting";
    }else{
        cout<<"Raj cannot fix both painting";
    }

    return 0;
}