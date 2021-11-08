#include<iostream>
using namespace std;
class large
{
  private:
    int x,y;
  public:
    large(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    friend void calc(large &b);
};
void calc(large &b)
{
  if(b.x>b.y)
  {
    cout<<b.x<<" is largest."<<endl;
  }
  else
  {
    cout<<b.y<<" is largest."<<endl;
  }
}
int main()
{
  int a,b;
  cout<<"Enter the first number : ";
  cin>>a;
  cout<<"Enter the second number : ";
  cin>>b;
  large c(a,b);
  calc(c);
  return 0;
}
