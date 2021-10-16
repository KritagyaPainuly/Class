#include<iostream>
using namespace std;
class power
{
    public:
    int n;
    double m;
    void display()
    {
       double x=m;
       for(int i=1;i<n;i++)
       x=x*m;
       cout<<"Result: "<<x<<endl;
    }
};
int main()
{
  int n;
  cout<<"How many rounds do you want\n";
  cin>>n;
  power x[n];
  for(int i=0;i<n;i++)
  { 
      cout<<"Enter number and power\n";
      cin>>x[i].m>>x[i].n;
      x[i].display();
  }
}
