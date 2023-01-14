#include<iostream>
using namespace std;

float studioCal(string monthN,float stay);
float apartmentCal(string monthN,float stay);

int main()
{
    string monthN;
    float stay;

    cout<<"Enter the MOnth: ";
    cin>>monthN;

    cout<<"Enter the number of stay: ";
    cin>>stay;

    float r1,r2;

    r1 = studioCal(monthN,stay);
    r2 = apartmentCal(monthN,stay);

    cout<<"Apartment: "<<r2<<"$\n";
    cout<<"Studio: "<<r1<<"$";
}

float studioCal(string monthN,float stay)
{
    float res;

    if(monthN == "may" || monthN == "october")
    {
        if(stay <= 7)
        {
            res = 50.00*stay;
        }

        else if(stay > 7 && stay <= 14)
        {
            float a;
            a = 50.00 - ((50.00*5)/100);
            res = a*stay;
        }

        else if(stay > 14)
        {
            float a;
            a = 50.00 - ((50.00*30)/100);
            res = a*stay;
        }
    }
    
    if(monthN == "june" || monthN == "september")
    {
        if(stay > 14)
        {
            float a;
            a = 75.20 - ((75.20*20)/100);
            res = a*stay;
        }

        else if(stay <= 14)
        {
            res = 75.20*stay;
        }
    }

    if(monthN == "july" || monthN == "august")
    {
        res = 76.00*stay;
    }

    return res;
}

float apartmentCal(string monthN,float stay)
{
    float res;

    if(monthN == "may" || monthN == "october")
    {
        if(stay <= 14)
        {
            res = 65.00*stay;
        }

        else if(stay > 14)
        {
            float a;
            a = 65.00 - (65.00*10)/100;
            res = a*stay;
        }
    }
    
    if(monthN == "june" || monthN == "september")
    {
        if(stay >14)
        {
            float a;
            a = 68.70 - ((68.70*10)/100);
            res = a*stay;
        }

        else if(stay <= 14)
        {
            res = 68.70*stay;
        }
    }

    if(monthN == "july" || monthN == "august")
    {
         if(stay > 14)
        {
            float a;
            a = 77.00 - ((77.00*10)/100);
            res = a*stay;
        }

        else if(stay <= 14)
        {
            res = 77.00*stay;
        }
    }

    return res;
}