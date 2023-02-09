#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  const int nums = 14;
  int grade[nums],tot,x;
  float avg, deviation[14];
  tot=0;
  for (x=0;x<nums;x++)
    {
      cout<<"Enter grade # "<<(x+1)<<": ";
      cin >> grade[x];
      tot=tot+grade[x];
    }
    avg=tot/nums;
    cout<<"\nThe average of the values is "<<avg<<endl;
    cout<<"Element  Element  Deviation\n";
    cout<<"Number   Value    from Avg.\n";
    cout<<"------   -----    ---------\n";

      for (x=0;x<nums;x++)
      {
        deviation[x]=grade[x]-avg;
        cout<<setw(4)<<x," ";
        cout<<setw(10)<<grade[x]<<" ";
        cout<<setiosflags(ios::showpoint)<<setw(10);
        cout<<setprecision(2)<<deviation[x]<<endl;
      }

  return 0;
}