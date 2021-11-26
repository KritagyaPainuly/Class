#include<iostream>
using namespace std;
class base{
public:
string name;
string ec;
base()
{
name="Kritagya";
ec="R500";
}
};
class child:public base{
public:
int sal;
void display()
{
cout<<name<<" "<<ec<<" "<<sal<<endl;
}
};
int main()
{
child a;
a.sal=20000;
a.display();
}
