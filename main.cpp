#include <iostream>
#include <string>
using namespace std;
 main()
{
 int a,b,c=0;
 cin>>a;
 b=a;
 while(a>0)
 {
  c=c*10+a%10;
  a/=10;
 }
 if (c==b)
  cout<<"symmetrical";
 else
  cout<<"unsymmetrical";
  return 0 ;
}
