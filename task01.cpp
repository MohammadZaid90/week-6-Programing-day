#include<iostream>
using namespace std;

string tempHumi(string temperature,string humidity);

int main()
{
    string temperature,humidity;

    cout<<"Enter the temperature outside: ";
    cin>>temperature;

    cout<<"Enter the humidity value: ";
    cin>>humidity;

    string ans = tempHumi(temperature,humidity) ;
    cout<<ans;
}

string tempHumi(string temperature,string humidity)
{
    string ret;

    if(temperature == "warm" && humidity == "dry")
    {
        ret = "play tennis";
    }

    else if(temperature == "warm" && humidity == "humid")
    {
        ret = "swim";
    }

    else if(temperature == "cold" && humidity == "dry")
    {
        ret = "play basketball";
    }

    if(temperature == "cold" && humidity == "humid")
    {
        ret = "watch tv";
    }

    return ret;
}