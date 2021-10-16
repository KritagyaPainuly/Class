#include <iostream>
using namespace std;
class stu
{
	public:
	string name;
	int unit;
	float rate;
};
int main()
{
  int n;	
  cout<<"How many members are there \n";
  cin>>n;
  stu x[n];
  for(int i=0;i<n;i++)
  {
   cout<<"Enter name and unit\n";
   cin>>x[i].name>>x[i].unit;
   if(x[i].unit<100)
   x[i].rate=0.60*x[i].unit;
   else if(x[i].unit<300)
   x[i].rate=60+0.80*(x[i].unit-100);
   else if(x[i].unit>300)
   {
   x[i].rate=220+0.90*(x[i].unit-300)+50;
   x[i].rate=x[i].rate+(x[i].rate*0.15);
   }
  }
  for(int i=0;i<n;i++)
  cout<<x[i].name<<" "<<x[i].unit<<" "<<x[i].rate<<endl;
}
