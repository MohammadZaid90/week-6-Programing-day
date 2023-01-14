#include<iostream>
using namespace std;

float calculatePrices(string fruitN,string weekDay,float quantity);

int main()
{
    string fruitN,weekDay;
    float quantity;

    cout<<"Enter the Fruit name which you want: ";
    cin>>fruitN;

    cout<<"Enter in which Day you are buying fruits: ";
    cin>>weekDay;

    cout<<"Enter the quantioty of fruits: ";
    cin>>quantity;

    float ans = calculatePrices(fruitN,weekDay,quantity);
    if(ans == 0)
    {
        cout<<"Invalid";
    }
    else
    {
        cout<<ans;
    }
}

float calculatePrices(string fruitN,string weekDay,float quantity)
{
    float result;

    if(weekDay == "monday" || weekDay == "tuesday" || weekDay == "wednesday" || weekDay == "thursday" || weekDay == "friday")
    {
        if(fruitN == "banana")
        {
            result = quantity*2.50;
        }

        else if(fruitN == "apple")
        {
            result = quantity*1.20;
        }

        else if(fruitN == "orange")
        {
            result = quantity*0.85;
        }

        else if(fruitN == "grapefruit")
        {
            result = quantity*1.45;
        }

        else if(fruitN == "kiwi")
        {
            result = quantity*2.70;
        }

        else if(fruitN == "pineapple")
        {
            result = quantity*5.50;
        }

        else if(fruitN == "grapes")
        {
            result = quantity*3.85;
        }
    }


    if(weekDay == "saturday" || weekDay == "sunday")
    {
        if(fruitN == "banana")
        {
            result = quantity*2.70;
        }

        else if(fruitN == "apple")
        {
            result = quantity*1.25;
        }

        else if(fruitN == "orange")
        {
            result = quantity*0.90;
        }

        else if(fruitN == "grapefruit")
        {
            result = quantity*1.60;
        }

        else if(fruitN == "kiwi")
        {
            result = quantity*3.00;
        }

        else if(fruitN == "pineapple")
        {
            result = quantity*5.60;
        }

        else if(fruitN == "grapes")
        {
            result = quantity*4.20;
        }
    }

        
    else if(weekDay != "saturday" && weekDay != "sunday" && weekDay != "monday" && weekDay != "tuesday" && weekDay != "wednesday" && weekDay != "thursday" && weekDay != "friday")
    {
        if(fruitN != "banana" && fruitN != "apple" && fruitN != "orange" && fruitN != "grapefruit" && fruitN != "kiwi" && fruitN != "pineapple" && fruitN != "grapes")
        {
            result = -1;
        }
    }


    return result;
}