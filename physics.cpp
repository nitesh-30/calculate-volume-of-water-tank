#include<iostream>
#include<math.h>
using namespace std;
void work(int f,int s);
void kineticenergy(int m,int v);
void power(int f,int v);
void linearvelocity(int r,int w);
void centripetalforce(int m,int v,int r);
void circularturning(float u,int r);
void potentialenergy(int m,int h);
void semicircle(int r);
void halfdisk(int r);
void centerofmass(int m1,int m2,int x);
void moire(int m,int l);
void moirm(int m,int l);
void rog(float mi,int m);
void work(int f,int s)
{
    int w=f*s;
    cout<<"work done by moving body is="<<w<<"j"<<endl;
}
void kineticenergy(int m,int v)
{
    int ke=(m*v*v)/2;
    cout<<"Kinetic energy of a body is="<<ke<<"j"<<endl;
}
void power(int f,int v)
{
    int p=f*v;
    cout<<"power genrated="<<p<<"w"<<endl;
}
void potentialenergy(int m,int h)
{
    int pe=m*10*h;
    cout<<"potential energy store in body="<<pe<<"j"<<endl;
}
void linearvelocity(int r,int w)
{
    int v=r*w;
    cout<<"Linear velocity of the body is="<<v<<"m/s"<<endl;
}
void centripetalforce(int m,int v,int r)
{
   float fc=(float)(m*v*v)/r;
   cout<<"Centripetal force applied on body is="<<fc<<"N"<<endl;
}
void circularturning(float u,int r)
{
    float v=(float)sqrt(u*10*r);
    cout<<"safe velocity ="<<v<<"m/s"<<endl;
}
void semicircle(int r)
{
    cout<<"2*r*7/22"<<endl;
    int sc=(2*r*7)/22;
    cout<<sc<<endl;
}
void halfdisk(int r)
{
    cout<<"4*r*7/3*22"<<endl;
    int hc=(4*r*7)/(3*22);
    cout<<hc<<endl;
}
void centerofmass(int m1,int m2,int x)
{
    cout<<"m2*x/m1+m2"<<endl;
    float cm=(float)(m2*x)/(m1+m2);
    cout<<cm<<endl;
}
void moire(int m,int l)
{
    cout<<"m*l*l/3"<<endl;
    float moi=(m*l*l)/3;
    cout<<"moment of inertia="<<moi<<endl;
}
void moirm(int m,int l)
{
    cout<<"m*l*l/12"<<endl;
    float moi=(m*l*l)/12;
    cout<<"moment of inertia="<<moi<<endl;
}
void rog(float mi,int m)
{
    cout<<"squareroot(i/m)"<<endl;
    float k=(float)sqrt(mi/m);
    cout<<"Radius of Gyration="<<k<<endl;
}
int choice()
{
    int ch;
    cout<<"Enter 1 for work energy power"<<endl;
     cout<<"Enter 2 circular motion"<<endl;
      cout<<"Enter 3 for center of mass"<<endl;
      cout<<"Enter 4 for circular motion"<<endl;
      cout<<"Enter your choice"<<endl;
      cin>>ch;
      return ch;

}
int main()
{
    int rc;
    switch(choice())
    {
    case 1:

        cout<<"Enter 1 for find workdone"<<endl;
         cout<<"Enter 2 for find Kineticenergy"<<endl;
          cout<<"Enter 3 for find Power"<<endl;
           cout<<"Enter 4 for find Potential energy"<<endl;
            cout<<"Enter Your choice"<<endl;
            cin>>rc;
            if(rc==1)
            {
                int f,s;
                cout<<"Enter the Force applied in N and distance moved in m"<<endl;
                cin>>f>>s;
                work(f,s);
            }
            else if(rc==2)
            {
                int m,v;
                cout<<"Enter the mass in kg of the body and velocity in m/s"<<endl;
                cout<<"Enter the mass of body"<<endl;
                cin>>m;
                cout<<"Enter the velocity"<<endl;
                cin>>v;
                kineticenergy( m, v);
            }
            else if(rc==3)
            {
                int f,v;
                cout<<"Enter the value of force applied in N and velocity in m/s"<<endl;
                cout<<"Enter the value of force applied"<<endl;
                cin>>f;
                cout<<"Enter the value of velocity"<<endl;
                cin>>v;
                power( f, v);
            }
            else if(rc==4)
            {
                int m,h;
                cout<<"Enter the mass of body in kg and height in m"<<endl;
                cout<<"Enter the mass of body in kg"<<endl;
                cin>>m;
                cout<<"Enter the height in m"<<endl;
                cin>>h;
                potentialenergy( m, h);
            }
            break;
    case 2:
         cout<<"Enter 1 for find linear velocity"<<endl;
         cout<<"Enter 2 for find Centripetalforce"<<endl;
          cout<<"Enter 3 for find Circularturning of road"<<endl;
            cout<<"Enter Your choice"<<endl;
            cin>>rc;
            if(rc==1)
            {
                int r,w;
                cout<<"Enter the Radius and Angular velocity of circular body"<<endl;
                cout<<"Enter the Radius of circular body"<<endl;
                cin>>r;
                cout<<"Enter the Angular Velocity of Circular body"<<endl;
                cin>>w;
                linearvelocity(r,w);
            }
            else if(rc==2)
            {
                int m,v,r;
                cout<<"Enter the mass  in kg of circularbody"<<endl;
                cin>>m;
                cout<<"Enter the velocity  in m/s of circularbody"<<endl;
                cin>>v;
                cout<<"Enter the radius in m of circularbody"<<endl;
                cin>>r;
                centripetalforce( m, v, r);
            }
            else if(rc==3)
            {
                float u;
                int r;
                cout<<"Enter the friction value of road"<<endl;
                cin>>u;
                cout<<"Enter the radius of circular road"<<endl;
                cin>>r;
                circularturning( u, r);
            }
            else{
                cout<<"Invalied choice"<<endl;
            }
            break;
    case 3:
        cout<<"Enter 1 for finding the center of mass of semicirculare disk"<<endl;
        cout<<"Enter 2 for finding the center of mass of half disk"<<endl;
        cout<<"Enter 3 for finding the center of mass of two body put at some distance"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>rc;
        if(rc==1)
        {
            int r;
            cout<<"Enter the radius of disk"<<endl;
            cin>>r;
            semicircle( r);

        }
        else if(rc==2)
        {
             int r;
            cout<<"Enter the radius of disk"<<endl;
            halfdisk( r);

        }
        else if(rc==3)
        {
            int m1,m2,x;
            cout<<"Enter the mass of first body in kg"<<endl;
            cin>>m1;
            cout<<"Enter the mass of second body in kg"<<endl;
            cin>>m2;
            cout<<"Enter the distance between two body"<<endl;
            cin>>x;
            centerofmass(m1,m2,x);
        }
        break;
    case 4:
        cout<<"Enter 1 for finding the moment of inertia of rod join at end"<<endl;
        cout<<"Enter 2 for finding the moment of inertia of rod join at middle"<<endl;
        cout<<"Enter 3 for finding the Radius of Gyration"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>rc;
        if(rc==1)
        {
            int m,l;
            cout<<"Enter the mass of rod"<<endl;
            cin>>m;
            cout<<"Enter the length of rod in m"<<endl;
            cin>>l;
             moire( m, l);

        }
        else if(rc==2)
        {
            int m,l;
            cout<<"Enter the mass of rod"<<endl;
            cin>>m;
            cout<<"Enter the length of rod in m"<<endl;
            cin>>l;
             moirm( m, l);

        }
        else if(rc==3)
        {
            float mi;
            int m;
            cout<<"Enter the moment of inertia of a body"<<endl;
            cin>>mi;
            cout<<"Enter the mass of a body in kg"<<endl;
            cin>>m;
             rog( mi, m);
        }
        else{
            cout<<"invalied choice"<<endl;
        }
        break;
    default:
        cout<<"Invalied choice"<<endl;

    }

}
