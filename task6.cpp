#include<iostream>
using namespace std;
class test 
{
public:
int t1;
int t2;
test operator+(test t)
{
t.t1=t1+t.t1;
t.t2=t2+t.t2;
return t;
}
void operator==(test t)
{
if(t1==t.t1 &&
t2==t.t2)
cout<<"Equal\n";
else 
cout<<"Not Equal\n";
}
void display()
{
cout<<t1<<" ";
cout<<t2<<endl;
}
}; 
int main()
{
test test1,test2,test3;
cin>>test1.t1>>test1.t2;
cin>>test2.t1>>test2.t2;
test1==test2;
test3=test1+test2;
test3.display();
}
