#include <iostream>
#include<windows.h>
using namespace std;


int main() 
{

  system("chcp 65001 > nul");
//===========================================================
//VARIABLE DECLARATIONS
//These are the"storage boxes" where we keep user answers
//===========================================================
string name;            //Stores the user's name (text)
string course;          //Stores the course (BBIT or BCS)
string hobby;           //Stores the hobby
string reason;          //Stores why they choose the course
string expectation;     //Stores what they expect to learn
string defination;      //Stores their defination of programming
string food;            //Stores their favourite food
string job;             //Stores their dream job


// ===========================================================
//QUESTION 1: NAME
// ===========================================================


cout<<"======================================"<<endl;
cout<<"WELCOME TO YOUR FIRST PROGRAM!👏🏻"     <<endl;
cout<<"======================================"<<endl;
cout<<endl;


cout<<"1. What is your name?";
getline(cin,name); //Read the full line (including spaces)

//============================================================
//QUESTION 2: COURSE (BBIT/BCS)
// ===========================================================


cout<<"2. What course are you doing? (BBIT/BCS):";
getline(cin,course);


//============================================================
//QUESTION 3: HOBBY
//==========================================================


cout<<"3.What is your hobby?";
getline(cin,hobby);


//============================================================
//QUESTION 4: REASON FOR CHOOSING THE COURSE
//==========================================================


cout<<"4.Why did you choose this course?";
getline(cin,reason);


//============================================================
//QUESTION 5: EXPECTATIONS
//==========================================================


cout<<"5.What do you expect to learn in programming?";
getline(cin,expectation);


//===========================================================
//QUESTION 6: DEFINITION OF PROGRAMMING
//===========================================================


cout<<"6.In your own words, what is programming?";
getline(cin,defination);


//============================================================
//QUESTION 7: FAVOURITE FOOD
//=========================================================


cout<<"7.What is your favourite food?";
getline(cin,food);


//===========================================================
//QUESTION 8: DREAM JOB
//===========================================================


cout<<"8.What is your dream job?";
getline(cin,job);



//===========================================================
//DISPLAY THE SUMMARY
//===========================================================


cout<<endl;
cout<<"======================================"<<endl;
cout<<"💞YOUR PROFILE SUMMARY💞"          <<endl;
cout<<"======================================"<<endl;
cout<<endl;


cout<<"\xFO\x9F\x92\x97 Name:          "<<name<<endl;
cout<<"📁Course:        "<<course<<endl;
cout<<"👠Hobby:         "<<hobby<<endl;
cout<<"🤩Reason:        "<<reason<<endl;
cout<<"💐Expectation:      "<<expectation<<endl;
cout<<"🫡Programming is:    "<<defination<<endl;
cout<<"😋Favourite food:     "<<food<<endl;
cout<<"🤗Dream job:          "<<job<<endl;
cout<<endl;

cout<<"======================================"<<endl;
cout<<"🎉Great job, Nasra Daud! You are on your way to becoming a great programmer!🎉"     <<endl;
cout<<"======================================"<<endl;




    return 0;
}