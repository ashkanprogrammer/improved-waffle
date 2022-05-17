#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a, b, c,d;
    cin >> c;
    cin>>d;
    if(c>d)
    {
    for(a = d+1; a <= c; a++)
    {

        for(b = 2; b <= (a / 2); b++)
        {

            if(a % b == 0)
            {
                b = a;
                break;
            }
        }
        if(b != a)
        {
            cout << a << " "<<endl;
        }
    }
   }
  if(d>c)
  {
      for(a=c+1; a<=d; a++)
      {
          for(b=2; b<=(a/2); b++)
          {
              if(a%b==0)
              {
                  b=a;
                  break;
              }
          }
          if(b!=a){
              cout<<a<<" \t";
          }
      }
  }
  if(c==d||d+1==c||c+1==d)
  {
      cout<<"false";
  }
 }

