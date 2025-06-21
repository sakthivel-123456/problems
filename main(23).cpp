#include<iostream>
using namespace std;
int sun=100;
int main()
{
    int a,b,c,profit;
    cout<<"number of paper sold:";
    cin>>a;
    cout<<"cost of paper:";
    cin>>b;
    cout<<"company spend per copy:";
    cin>>c;
    profit=a*b-sun;
    profit=profit-c*a;
    cout<<"profit is:"<<profit<<endl;
}