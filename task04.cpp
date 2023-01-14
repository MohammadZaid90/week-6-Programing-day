#include<iostream>
using namespace std;

float calculateCharges(char service,char st,float ct);

int main()
{
    char service,st;
    float ct;

    cout<<"Enter which type of customer you are(REsidential or Premiuim) select r/p: ";
    cin>>service;

    cout<<"(Press 'D' for the day time or Press 'N' for the night time)Call: ";
    cin>>st;

    cout<<"Enter the number of minutes: ";
    cin>>ct;

    float ans = calculateCharges(service,st,ct);
    cout<<"Your charges are: "<<ans<<"$";
}

float calculateCharges(char service,char st,float ct)
{
    float result;

    if(service == 'r'  && (st == 'N' || st == 'D'))
    {
        if(ct <= 50)
        {
        result = 10;
        }

        else if(ct > 50)
        {
            result = 10 + 0.20;
        }
    }

    if(service == 'p' && st == 'D')
    {
        if(ct <= 75)
        {
        result = 25;
        }

        else if(ct > 75)
        {
            result = 25 + 0.10;
        }
    }

    if(service == 'p' && st == 'N')
    {
        if(ct <= 100)
        {
        result = 25;
        }

        else if(ct > 100)
        {
            result = 25 + 0.05;
        }
    }

    return result;
}