/*
  c++ code to take the length and breadth of the rectangle and calculate the area and cost of painting that rectangle.
*/
#include<iostream>
using namespace std;
int main()
{
  int length,breadth,area,cost,totalcost;
  cout<<"Enter the length of the rectangle in meters :";
  cin>>length;
  cout<<"Enter the breadth of the rectangle in meters :";
  cin>>breadth;
  area=length*breadth;
  cout<<"Enter the cost of the paint for per meter square :";
  cin>>cost;
  totalcost=cost*area;
  cout<<"The area of rectangle is "<<area<<" meter square."<<endl;
  cout<<"The total cost required for painting is "<<totalcost<<" rupees."<<endl;
  return 0;;
}
