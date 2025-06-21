#include<iostream>
 #include<iomanip>
 using namespace std;
 int main()
 {
     int a,b,c;
     cout<<"the amount dorrow by alice:";
     cin>>a;
     cout<<"interest:";
     cin>>b;
     cout<<"year:";
     cin>>c;
     float rateinterest=(a*b*c)/100.0;
     cout<<fixed<<setprecision(4)<<""<<rateinterest<<endl;
     float totalamount=rateinterest+a;
     cout<<fixed<<setprecision<<""<<totalamount<<endl;
     float discount=rateinterest*0.02;
     cout<<fixed<<setprecision(4)<<discount<<endl;
     float finalamount=totalamount-discount;
     cout<<fixed<<setprecision<<""<<finalamount<<endl;
 }