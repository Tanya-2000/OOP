#include<iostream>
using namespace std;
int main()
{
int a[30];
int i,j,x,n,counter,average;
cout<<"enter the value of n";
cin>>n;
cout<<"enter the numbers";
for(i=0;i<n;++i)
    {
 cin>>a[i];
    }
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
if(a[i]<a[j])
        {
            x=a[i];
            a[i]=a[j];
            a[j]=x;
        }
 }

cout<<"second smallest : "<<a[1];
cout<<"second largest number"<<a[n-2];
return 0;
}
