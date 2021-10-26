/*
  program to compute the net salary of the employ by entering percentage of HRA,TA,DA.
*/
#include<iostream>
using namespace std;
int main()
{
  double Basic_pay,Net_salary,Hra,Ta,Da,Hra_percent,Ta_percent,Da_percent;
  string name;
  cout<<"Enter the name of the employ :";
  getline(cin,name);
  cout<<"Enter the basic pay of the employ :";
  cin>>Basic_pay;
  cout<<"Enter the HRA percentage :";
  cin>>Hra_percent;
  cout<<"Enter the TA percentage :";
  cin>>Ta_percent;
  cout<<"Enter the DA percentage :";
  cin>>Da_percent;
  Hra=(Hra_percent*Basic_pay)/100;
  Ta=(Ta_percent*Basic_pay)/100;
  Da=(Da_percent*Basic_pay)/100;
  Net_salary=Basic_pay+Hra+Ta+Da;
  cout<<"The name of the employ is "<<name<<endl;
  cout<<"Net salary of the employ is = "<<Net_salary<<" rupees."<<endl;
  return 0;
}
