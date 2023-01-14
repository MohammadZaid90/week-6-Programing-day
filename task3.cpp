#include <iostream>
using namespace std;

string marks(int date, string month);

int main()
{
    int date;
    string month;

    cout << "Enter the date of your birth: ";
    cin >> date;

    cout << "Enter your birth month: ";
    cin >> month;

    string zodiac = marks(date, month);
    cout << "Your Zodiac sign is: " << zodiac;
}

string marks(int date, string month)
{
    string sign;

    if (month == "march" && (date >= 21 || date <= 31) || month == "april" && (date >= 1 || date <= 19))
    {
        sign = "Aries";
    }

    else if (month == "april" && (date >= 20 || date <= 30) || month == "may" && (date >= 1 || date <= 20))
    {
        sign = "Taurus";
    }

    else if (month == "may" && (date >= 21 || date <= 30) || month == "june" && (date >= 1 || date <= 21))
    {
        sign = "Gemini";
        return sign;
    }

    else if (month == "june" && (date >= 22 || date <= 30) || month == "july" && (date >= 1 || date <= 22))
    {
        sign = "Cancer";
    }

    else if (month == "july" && (date >= 23 || date <= 31) || month == "august" && (date >= 1 || date <= 22))
    {
        sign = "Leo";
    }

    else if (month == "august" && (date >= 23 || date <= 31) || month == "september" && (date >= 1 || date <= 22))
    {
        sign = "Virgo";
    }

    else if (month == "september" && (date >= 23 || date <= 31) || month == "october" && (date >= 1 || date <= 23))
    {
        sign = "Libra";
    }

    else if (month == "october" && (date >= 24 || date <= 31) || month == "novembe" && (date >= 1 || date <= 21))
    {
        sign = "Scorpius";
    }

    else if (month == "november" && (date >= 22 || date <= 30) || month == "december" && (date >= 1 || date <= 21))
    {
        sign = "Sagittarius";
    }

    else if (month == "december" && (date >= 22 || date <= 31) || month == "january" && (date >= 1 || date <= 19))
    {
        sign = "Capricornus";
    }

    else if (month == "january" && (date >= 20 || date <= 31) || month == "february" && (date >= 1 || date <= 18))
    {
        sign = "Aquarius";
    }

    else if (month == "february" && (date >= 19 || date <= 29) || month == "march" && (date >= 1 || date <= 20))
    {
        sign = "Pisces";
    }

    return sign;
}