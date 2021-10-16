#include<iostream>
using namespace std;
class Tollboth{
unsigned int count;
double amount;
public:
void zero()
{
count=0;
amount=0;
}
void paying()
{
count++;
amount=amount+50;
}
void nopayingcar()
{
count++;
}
void display()
{
cout<<"Total car: "<<count<<endl;
cout<<"Total amount: "<<amount<<endl;
}
};
int main()
{
int s;
Tollboth a;
a.zero();
char c;
do{
cout<<"1 Set it to 0\n2 Paying Car\n3 No Paying Car\n4 Display\n";
cin>>s;
switch(s)
{ 
case 1:
a.zero();
break;
case 2:
a.paying();
break;
case 3:
a.nopayingcar();
break;
case 4:
a.display();
break;
}
cout<<"Press A to continue\n";
cin>>c;
}while(c=='A');
return 0;
}
