#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    a=a-b;
    b=a+b;
    a=b-a;
    cout<<"after swapping :"<<"a :"<<a<<" "<<"b :"<<b<<endl;


    return 0;
}

