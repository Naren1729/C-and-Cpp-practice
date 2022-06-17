#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      size_t  a=0,b=0;
      cin>>a>>b;
      if( a==b)
      {
          cout<<a<<" "<<endl;
      }
      else if(a==0 || b==0)
      {
          cout<<-1<<" "<<endl;
      }
      else
      {
        unsigned long long int temp_min = min(a,b),temp_max = max(a,b),operation=0;
          while(temp_min < temp_max)
          {
              temp_min *= 2;
              operation++;
          }

          if(temp_min >= temp_max)
          {

              temp_min /= 2;
              operation--;
          }
         int int_operations = temp_min - (temp_max -temp_min);
         temp_min  -= int_operations;
         temp_max  -= int_operations;
         operation += int_operations;
         temp_min *= 2;
         operation++;
         operation += temp_max;
         cout<<operation<<'\n';
     }

    }
    return 0;
}
