#include<iostream>
using namespace std;
int main()
{
int n1,n2,n3;
cout<<"enter the numbers";
cin>>n1>>n2>>n3;
if(n1>n2 && n1>n3)
{
cout<<"n1 is greatest";
}
if(n2>n1 && n2>n3)
{
cout<<"n2 is greatest";
}
else
{
cout<<"n3 is greatest";
}
return 0;
}
