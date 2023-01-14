#include<iostream>
using namespace std;

string pointLocation(int h,int x,int y);

int main()
{
    int a,b,c;
    cout<<"enter the value of height: "<<endl;
    cin>>a;

    cout<<"enter the value of x axis: "<<endl;
    cin>>b;

    cout<<"enter the value of y axis: "<<endl;
    cin>>c;

    string res = pointLocation(a,b,c);
    cout<< res;
}

string pointLocation(int h,int x,int y)
{
    string fin;

    if((x >= 0 && x <=3*h) && (y == 0)) 
    {
        fin = "border";
    }
    else if((x >= 0 && x <= h) && (y == h))
    {
        fin = "border";
    }
    else if((x >= 2*h && x <= 3*h) && (y == h))
    {
        fin = "border";
    }
    else if((x == h) && (y >= h && y <= 4*h))
    {
        fin = "border";
    }
    else if((x == 2*h) && (y >= h && y <= 4*h))
    {
        fin = "border";
    }
    else if((x == 0) && (y >= 0 && y <= h))
    {
        fin = "border";
    }
    else if((x == 3*h) && (y >= 0 && y <= h))
    {
        fin = "border";
    }
    else if((x >= h && x <= 2*h) && (y == 4* h))
    {
        fin = "border";
    }
    else if(x < 0 || x > 3*h)
    {
        fin = "outside";
    }
    else if(y < 0 || y > 4*h)
    {
        fin = "outside";
    }
    else if((x < h) && (y > h))
    {
        fin = "outside";
    }
    else if((x > 2*h) && (y > h))
    {
        fin = "outside";
    }
    
    else
    {
        fin = "inside";
    }
    return fin;
}