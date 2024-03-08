#include<iostream>
using namespace std;
int main()
{
int a,b,c,s,area,d,vol;
cout << "Enter a number a=";
cin >> a;
cout << "Enter a number b=";
cin >> b;
cout <<"Enter a number c=";
cin >> c;
cout << "Enter a diameter=";
cin >> d;
s= a+b+c/2;
area =1/2*(s*(s-a)*(s-b)*(s-c));
vol = (3.1415/6)*(d*d*d);
if(vol>area)
{
cout <<"Area of triangles=" << area <<"\n";
cout <<"Volume of sphere=" << vol <<"\n";
}
else
{
cout <<"Volume of sphere=" << vol <<"\n";
cout <<"Area of triangles =" << area <<"\n";
}
return 0;
}
