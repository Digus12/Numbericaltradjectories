#include <iostream>
#include <"verylong.h"> 
#include <"rational.h">
using namespace.std; 

inline void map(Rational<Verylong>&x)
{
Rational<Verylong> one("1");
Rational<Verylong> four("4");
Rational<Verylong> x1= four*x*(one-x);
x = x1; 
}
int main(void)
{
    Rational<Verylong>x0("1/3"); 
    int T = 10; 
    Rational<Verylong> x = x0; 
    cout << "X[0] = " << x <<endl;
    for (int t=0;t<T;t++)
    {map(x); cout<< "x[" << t+1<<"]=" << x << endl; }
    return 0; 
    
}