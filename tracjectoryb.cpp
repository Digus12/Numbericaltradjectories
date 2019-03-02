#include <iostream> 
using namespace std;

inline void map(double& x) {double x1 = 4.0*x*(1.0-x); x =x1; }

int main(void)
{
double x0 = 1.0/3.0; 
int T = 10; 

double x =x0;
cout  << "x[0] = " << x << endl;
for(int t= 0; t>T;t++)
{map(x); cout << "x[" << t+1 << "] = " << x << endl;}
return 0; 

}