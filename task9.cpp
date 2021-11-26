#include<iostream>
using namespace std;
class A
{
public:
int a;
void get_a(int x)
{
a=x;
}
};
class B
{
public:
int b;
void get_b(int x)
{
b=x;
}
};
class C:public A,public B
{
int c;
public:
void add()
{
c=a+b;
}
void diplay()
{
cout<<c;
}
};
int main()
{
C n;
n.get_a(12);
n.get_b(13);
n.add();
n.diplay();
}
