/*
Curso de C++
Autor: JAOR
c130_ seek_delete_vector()
*/

// Library
#include <iostream>
#include <string>
#include <vector>

// Space Name
using namespace std;

// Add an employee
void AddEmployee(vector<string> &name, 
                 vector<string> &department, 
                 vector<string> &title) 
{
   // Variable to data
   string theName;
   string theDept;
   string theTitle;

   // Read data; name, department, title
   cout << endl << "Enter the name to add: " << endl;
   getline(cin, theName);

   cout << "Enter " << theName << "'s department: " << endl;
   getline(cin, theDept);

   cout << "Enter " << theName << "'s title: " << endl;
   getline(cin, theTitle);

   // push in vector's
   name.push_back(theName);
   department.push_back(theDept);
   title.push_back(theTitle);

   // Message 
   cout << theName << "'s information has been added." << endl;
}

// Delete an employee
void DeleteEmployee(vector<string> &name, 
                    vector<string> &department, 
                    vector<string> &title) 
{
   // Var to read Name to delete
   string theName;

   // Index
   int index=0;

   // Flag to found
   bool flag = false;

   // Message
   cout << endl << "Enter the name to delete: " << endl;
   getline(cin, theName);

   // Cycle to seek employee
   for (auto xEmployee:name)
   {
       // Verify
       if (xEmployee==theName)
       {
          // Delete the Employee in Vector's
          name.erase(name.begin() + index );
          department.erase(department.begin() + index );
          title.erase(title.begin() + index );

          // Change Flag
          flag = true;

          // break
          break;
       }

       // Increment index
       index++;
   }

   // Verify
   if (flag)
   {
      // Message sucess
      cout << "The Employee was deleted ..." << endl;      
   }
   else
   {
      // Message not found
      cout << "Employee not found" << endl;
   }
}

// Update an employee
void UpdateEmployee(vector<string> &name, 
                    vector<string> &department, 
                    vector<string> &title)  
{
   // Var to read Name to delete
   string theName;
   string theDept;
   string theTitle;

   // Index
   int index=0;

   // Flag to found
   bool flag = false;

   // Message
   cout << endl << "Enter the name to update: " << endl;
   getline(cin, theName);

   // Cycle to seek employee
   for (auto &xEmployee:name)
   {
       // Verify
       if (xEmployee==theName)
       {
         cout << endl << "Enter the New name to add: " << endl;
         getline(cin, theName);
         cout << "Enter New " << theName << "'s department: " << endl;
         getline(cin, theDept);
         cout << "Enter New " << theName << "'s title: " << endl;
         getline(cin, theTitle);

         // Update using xEmployee
         xEmployee = theName;

         // Update with index
         department[index] = theDept;
         title[index] = theTitle;

          // Change Flag
          flag = true;
       }

       // Increment inxdex
       index++;
   }

   // Verify
   if (flag)
   {
      // Message sucess
      cout << "The Employee was updated ..." << endl;      
   }
   else
   {
      // Message not found
      cout << "Employee not found" << endl;
   }
}

// List all employees
void ListEmployees(vector<string> &name, 
                   vector<string> &department, 
                   vector<string> &title) 
{
   // Variable's
   int nElements;
   int i;

   // Get Size
   nElements = name.size();

   // Verify >0
   if (nElements > 0) 
   {
      // Change Line
      cout << endl;

      // Cycle to Display
      for (i = 0; i < nElements; ++i) 
      {
         cout << i << ") Name: "        << name.at(i) <<
                      ",\tDepartment: " << department.at(i) <<
                      ",\tTitle: "      << title.at(i) << endl;
      }
   }
   else 
   {
      // Message not elements
      cout << endl << "There are no employees to list." << endl;
   }
}

// Get the action the user wants to perform
char GetAction(string prompt) 
{
   // Answer
   string answer;

   // Char
   char firstChar;

   // Init
   firstChar = '?';

   // The prompt
   cout << endl << prompt << endl;

   
   // Cycle
   while(answer.size() == 0) 
   {
      // Get Anser
      getline(cin, answer);
   }

   // Convert to upper
   firstChar = toupper(answer[0]);

   // return
   return firstChar;
}

// Main Function
int main() 
{
   // Constant to exit
   const char EXIT_CODE = 'X';

   // Constant to prompt
   const string PROMPT_ACTION = "Add, Delete, Update, List or eXit (a,d,u,l,x): ";

   // Vectors
   vector<string> name(0);
   vector<string> department(0);
   vector<string> title(0);
   
   // Option
   char userAction;

   // Init
   userAction = '?';

   // Loop until the user enters the exit code.
   userAction = GetAction(PROMPT_ACTION);

   // Cycle
   while (userAction != EXIT_CODE) 
   {
      // Switch Action
      switch(userAction) 
      {
         case 'A': AddEmployee(name, department, title);
                   break;
         case 'D': DeleteEmployee(name, department, title);
                   break;
         case 'U': UpdateEmployee(name, department, title);
                   break;               
         case 'L': ListEmployees(name, department, title);
                   break;
         default : // Do nothing
                   break;
      }
      // Read Action again
      userAction = GetAction(PROMPT_ACTION);
   }

   // End
   return 0;
}
