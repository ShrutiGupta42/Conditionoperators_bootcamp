#include<iostream>
using namespace std;

int main()
{
   int a, b, add, sub, product, div;
   cout<<"Enter first no.";
   cin>>a;
   cout<<"Enter second no.:";
   cin>>b;
   
   add=a+b;
   sub=a-b;
   product=a*b;
   div=a/b;
   
   cout<<"the addition of numbers is: ";
   cout<<add;
   cout<<"\n";
   cout<<"the difference of numbers is: ";
   cout<<sub;
    cout<<"\n";
   cout<<"the product of two numbers is: ";
   cout<<product;
    cout<<"\n";
   cout<<"the division of two numbers is: ";
   cout<<div;
    cout<<"\n";
   
   return 0;	
}
