// Lab 3 percentage.cpp
// This program will determine the percentage 
// of answers a student got correct on a test.
// Aramis Artiga

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
   string name;
   double numQuestions,
          numCorrect,
          percentage;
   
   // Get student's test data
   cout << "Enter student's first and last name: \n";
   // Insert student name
   getline (cin,name);
   // Stores students name 
   
   cout << "Number of questions on the test: "<<endl;
   //Ask's user to insert their name 
   cin  >> numQuestions;
   // stores the user's name in name
   cout << "Number of answers the student got correct: " <<endl;
   //Ask's the user for total # of correct answers
   cin  >> numCorrect;
   //Stores given answer in numCorrect
   
   //Formula for percentage 
   percentage = (numCorrect / numQuestions) *100;
   //Outputs all given information and final answer
   cout << name << endl;
   //Calculates the answer to the tenth place
   cout << fixed << setprecision(1) << percentage << "%" ;
    
   
   return 0;
}