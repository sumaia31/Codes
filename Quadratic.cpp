#include<bits/stdc++.h>
using namespace std;
int main()
{

    float a,b,c,d,x1,x2;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    cout<<"Value of x1 and x2 :"<<x1<<endl<<x2;


    return 0;
}

