#include<iostream>
using namespace std;

string calculateTime(int shtime,int smtime,int ahtime,int amtime);

int main()
{
    int shtime, smtime,ahtime,amtime;
    cout<<"Enter the exam starting time in hours: ";
    cin>>shtime;

    cout<<"Enter exam starting time in minutes: ";
    cin>>smtime;

    cout<<"Enter the arrival time in hours: ";
    cin>>ahtime;

    cout<<"Enter the arrival time in minutes: ";
    cin>>amtime;

    string ans = calculateTime(shtime,smtime,ahtime,amtime);
    cout<<ans;
}

string calculateTime(int shtime,int smtime,int ahtime,int amtime)
{
    int convertStart,convertArrive,minus;
    string out;

    convertStart = (shtime*60) + smtime;
    convertArrive = (ahtime*60) + amtime;
    minus = convertArrive - convertStart;

    if(minus <= 0)
    {
        if(minus >= -30)
        {
            int c = -1*(minus%60);
            int d = -1*(minus/60);

            out =" On Time";
            cout<<c<<" minutes before the time \n";
        }
        else if(minus < -30)
        {
            int c = -1*(minus%60);
            int d = -1*(minus/60);

            if(minus < -30 && minus > -60)
            {
                out ="too early";
                cout<<c<<" minutes early \n";
            }
            else if(minus <= -60)
            {
                out = "too early";
                cout<<d<<":"<<c<<" before time \n";
            }
        }
    }

    else if(minus >= 0)
    {
            int c = (minus%60);
            int d = (minus/60);

            if(minus > 0 && minus <= 60)
            {
                out = "late";
                cout<<c<<" minutes after time \n";
            }

            else if(minus > 60)
            {
                out = "late";
                cout<<d<<" "<<c<<" after time \n";
            }
    
    }

    return out;
}