/*
  program to take the length, breadth, round of fencing and cost of fencing of the farm from the user and then print the total cost of fencing the farm with wire.
*/

#include<iostream>
using namespace std;
int main()
{
  float length,breadth,parameter,rounds,total_length,cost,total_cost;
  cout<<"Enter the length of the farm in meters :";
  cin>>length;
  cout<<"Enter the breadth of the farm in meters :";
  cin>>breadth;
  cout<<"Enter the number of times you want to fence the farm :";
  cin>>rounds;
  cout<<"Enter the cost of fencing in rupees per meter :";
  cin>>cost;
  parameter=2*(length+breadth);
  total_length=rounds*parameter;
  total_cost=cost*total_length;
  cout<<endl<<"The parameter of the farm is "<<parameter<<" meters"<<endl;
  cout<<"Total wire required to fence the farm "<<rounds<<" times is "<<total_length<<" meters"<<endl;
  cout<<"Total cost of fencing the farm is "<<total_cost<<" rupees"<<endl;
  return 0;
}
