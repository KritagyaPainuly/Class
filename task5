#include<iostream>
using namespace std;
class number{
int a,b;
public:
number(){a=0; b=0;}//Default Constructor
number(int x,int y)//Parameter Constructor
{
a=x;
b=y;
}
number(number &i)//Copy constructor
{
cout<<"Invoking copy constructor\n";
a=i.a;
b=i.b;
}
void display()
{
cout<<a<<" "<<b<<endl;
}
};
int main()
{
number a,b(12,78),c(12,13),d;
a.display();
b.display();
c.display();
d=b;
d.display();
number e(c);
e.display();
}
