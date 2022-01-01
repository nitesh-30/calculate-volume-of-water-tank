#include<iostream>
using namespace std;
class WaterTank
{
  private:
   int L,B,H;
  public:
   WaterTank(int a,int e,int c)
   {
     L=a;
     B=e;
     H=c;
   }
  int getLength()
  {
    return L;

  }
  int getWidth()
  {
    return B;
  }
  int getHeight()
  {
    return H;
  }
  void volum()
  {
      cout<<(L*B*H)<<endl;
  }

  //Write your code here
};
class Calculate
{
  private:
   int l,b,h;
   public:
  void volume(int x)
  {
    l=b=h=x;
    cout<<(l*b*h)<<endl;
  }
  void volume(int x,int y)
  {
    l=b=x;
    h=y;
    cout<<(l*b*h)<<endl;
  }
  void volume(int x,int y,int z)
  {
    l=x;
    b=y;
    h=z;
    cout<<(l*b*h)<<endl;
  }
  void volume(WaterTank c)
  {
     c.volum( );
  }

};
int main()
{
    int l,b,c;
    cout<<"Enter the value of length ,breadth and height"<<endl;
     cin>>l>>b>>c;
     cout<<endl;
    int x,y,z;
    cout<<"Enter the value of x,y and z"<<endl;
    cin>>x>>y>>z;
    WaterTank w(l,b,c);
     Calculate d;
     d.volume(x);
     d.volume(x,y);
     d.volume(x,y,z);
     d.volume(w);
}
