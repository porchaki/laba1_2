#include <iostream>
#include <cmath>
using namespace std;
int main () {
double D,a,b,c,f=2,r,l;
cout << "ax^+bx+c=0 \n";
cout << "a= ";
cin >> a;
cout << "b= ";
cin >> b;
cout << "c= ";
cin >> c;
D=pow(b,2)-4*a*c;
if (D > 0)
{
    r=(-b+sqrt(D))/2*a;
    l=(-b-sqrt(D))/2*a;
    cout << r<<endl <<l;
}
if (D = 0){
	r=(-b+sqrt(D))/2*a;
	cout << r<<endl;}
if (D<0){
	cout << "Error!";}
system ("pause");
return 0;
}