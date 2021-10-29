#include<iostream>
using namespace std;
class test 
{
int t1;
int t2;
public:
friend test operator+(test t,test t2);
friend void operator==(test t,test t2);
void get()
{
cin>>t1>>t2;
}
void display()
{
cout<<t1<<" ";
cout<<t2<<endl;
}
};
test operator+(test t,test t2)
{
t.t1=t2.t1+t.t1;
t.t2=t2.t2+t.t2;
return t;
} 
void operator==(test t,test t2)
{
if(t2.t1==t.t1 && t2.t2==t.t2)
cout<<"Equal\n";
else 
cout<<"Not Equal\n";
}
int main()
{
test test1,test2,test3;
test1.get();
test2.get();
test1==test2;
test1=test1+test2;
test1.display();
}
