/*
  program to calculate the area of  circle , square , rectangle , triangle .
*/
#include<iostream>
using namespace std;
class Area
{
  public:
    int s,l,b;
    float r,bs,h;
    void area(float r)//area of circle
    {
      cout<<"Area of circle with radius "<<r<<" is = "<<3.14*r*r<<endl;
    }
    void area(int s)//area of square
    {
      cout<<"Area of square of side "<<s<<" = "<<s*s<<endl;
    }
    void area(int l,int b)//area of rectangle
    {
      cout<<"Area of rectangle of length "<<l<<" and breadth "<<b<<" = "<<l*b<<endl;
    }
    void area(float bs,float h)//area of triangle
    {
      cout<<"Area of triangle of base "<<bs<<" and height "<<h<<" = "<<(bs*h)/2<<endl;
    }
};
int main()
{
  Area ob;
  int ch;
  cout<<"Enter"<<endl<<"1-To find the area of circle"<<endl<<"2-To find the area of square"<<endl<<"3-To find the area of rectangle"<<endl<<"4-To find the area of triangle"<<endl;
  cout<<"Enter your choice : ";
  cin>>ch;
  switch(ch)
  {
    case 1:
      cout<<"Enter the radius of the circle : ";
      cin>>ob.r;
      ob.area(ob.r);
      break;
    case 2:
      cout<<"Enter the side of the square : ";
      cin>>ob.s;
      ob.area(ob.s);
      break;
    case 3:
      cout<<"Enter the length of the rectangle : ";
      cin>>ob.l;
      cout<<"Enter the breadth of the rectangle : ";
      cin>>ob.b;
      ob.area(ob.l,ob.b);
      break;
    case 4:
      cout<<"Enter the base of the triangle : ";
      cin>>ob.bs;
      cout<<"Enter the height of th triangle : ";
      cin>>ob.h;
      ob.area(ob.bs,ob.h);
      break;
    default:
      cout<<"You entered the wrong choice ."<<endl;
  }
  return 0;
}
