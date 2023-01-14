#include<iostream>
using namespace std;

string result(string name,float m1,float m2,float m3,float m4,float m5);

string tempHumi(string temperature,string humidity);

int main()
{
    float m1,m2,m3,m4,m5;
    string name;

    cout<<"Enter the student name: ";
    cin>>name;

    cout<<"Enter the marks of subject English: ";
    cin>>m1;

    
    cout<<"Enter the marks of subject Math: ";
    cin>>m2;

    
    cout<<"Enter the marks of subject Social Sciences: ";
    cin>>m3;

    cout<<"Enter the marks of subject Chemistry: ";
    cin>>m4;

    cout<<"Enter the marks of subject Biology: ";
    cin>>m5;

    string per =result(name,m1,m2,m3,m4,m5);
    cout<<per;
}

string result(string name,float m1,float m2,float m3,float m4,float m5)
{
    float addMarks,percentage;
    string grade;

    addMarks = m1+m2+m3+m4+m5;
    percentage = (addMarks*100)/500;

    if(percentage > 90 && percentage <= 100)
    {
        cout<<"Dear "<<name<<" your total marks is "<<addMarks<<" your percentage is "<<percentage<<" have got grade\n";
        grade = "A+";
    }

    else if(percentage > 80 && percentage <= 90)
    {
        cout<<"Dear "<<name<<" your total marks is "<<addMarks<<" your percentage is "<<percentage<<" have got grade\n";
        grade = "A";
    }

    else if(percentage > 70 && percentage <= 80)
    {
        cout<<"Dear "<<name<<" your total marks is "<<addMarks<<" your percentage is "<<percentage<<" have got grade\n";
        grade = "B+";
    }

    else if(percentage > 60 && percentage <= 70)
    {
        cout<<"Dear "<<name<<" your total marks is "<<addMarks<<" your percentage is "<<percentage<<" have got grade\n";
        grade = "B";
    }

    else if(percentage > 50 && percentage <= 60)
    {
        cout<<"Dear "<<name<<" your total marks is "<<addMarks<<" your percentage is "<<percentage<<" have got grade\n";
        grade = "C";
    }

    else if(percentage > 40 && percentage <= 50)
    {
        cout<<"Dear "<<name<<" your total marks is "<<addMarks<<" your percentage is "<<percentage<<" have got grade\n";
        grade = "D";
    }

    else if(percentage < 40)
    {
        cout<<"Dear "<<name<<" your total marks is "<<addMarks<<" your percentage is "<<percentage<<" have got grade\n";
        grade = "F";
    }

    return grade;
}