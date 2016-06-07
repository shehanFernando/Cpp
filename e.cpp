
#include <iostream>
#include <string>
using namespace std;

unsigned int fac(unsigned int n)
{
    unsigned int ret = 1;
    for(unsigned int i = 1; i <= n; ++i)
        ret *= i;
    return ret;
}
double e(int x){
    double e=0;
    for(int i=0; i < x; i++){
        e+=1/double(fac(i));
        }
    return e;
    }
int main()
{
  int x=20;
  cout << e(x);
}