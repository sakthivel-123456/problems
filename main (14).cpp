#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==n-1||i==j||i==0){
            cout<<" *";
            }
            else
                cout<<"  ";
        }cout<<"\n";
    }
    return 0;
}