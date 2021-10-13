#include<iostream>
using namespace std;
#define max 5
class stu{
public:
string name;
int stuId;
int mark[max];
void get()
{
cout<<"Enter Name StudentID and marks\n";
cin>>name;
cin>>stuId;
for(int i=0;i<max;i++)
cin>>mark[i];
}
void print()
{
cout<<"-----------------------\n";
cout<<name<<endl;
cout<<stuId<<endl;
for(int i=0;i<max;i++){
cout<<mark[i];
if(mark[i]<35)
cout<<"    Fail\n";
else
cout<<"    Pass\n";
}
}};
int main()
{
int n;
cout<<"How many student id are there\n";
cin>>n;
stu a[n];
for(int i=0;i<n;i++)
a[i].get();
for(int i=0;i<n;i++)
a[i].print();
return 0;
}
