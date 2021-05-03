#include<bits/stdc++.h>
using namespace std;
int main()
{

    float a,b,c,s,area;
    cout<<"Please enter three sides of a triangle: "<<endl;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"area of triangle is :"<<area<<endl;

    return 0;
}
