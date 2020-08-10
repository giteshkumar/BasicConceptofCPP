#include<iostream>
using namespace std;

int main()
{
int a=21;
int b=2;
int c;

c=a+b;
cout<<" Line1: the value of c is \t"<< c <<endl;
c=a-b;
cout<<" Line2: the value of c is \t"<< c <<endl;
c=a*b;
cout<<" Line3: the value of c is \t"<< c <<endl;
c=a/b;
cout<<" Line4: the value of c is \t"<< c <<endl;
c=a++;
cout<<" Line5: the value of c is \t"<< c <<endl;
c=b++;
cout<<" Line6: the value of c is \t"<< c <<endl;
c = ++a;
cout<<" Line5: the value of c is \t"<< c <<endl;
c = ++b;
cout<<" Line6: the value of c is \t"<< c <<endl;

}
