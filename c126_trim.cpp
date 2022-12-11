/*
Curso de C++
Autor: JAOR
c126_ trim con funciones
*/

// C++ program to remove white spaces in a given string
#include <bits/stdc++.h>
using namespace std;

// all types of possible spaces to remove
string toRemove = " \n\r\t\f\v"; 

string leftTrim(const string &s)
{
  // finding the index just after white spaces
  auto start = s.find_first_not_of(toRemove); 

  // removed leading white spaces
  return (start == string::npos) ? "" : s.substr(start); 
}

string rightTrim(const string &s)
{
  // finding the index just before white spaces
  auto end = s.find_last_not_of(toRemove); 

  // removed trailing white spaces
  return (end == string::npos) ? "" : s.substr(0, end + 1); 
}

string trim(const string &s) 
{
  // first trimming the left white space i.e. leading white spaces and next trimming the right white spaces i.e. trailing white spaces 
  return rightTrim(leftTrim(s)); 
}

// Funcion Principal
int main() 
{
  string s = " \tThis_is_testing\r\n ";
  cout << "The string before trimming: " << "BEGIN:" << s << ":END";
  cout << "\nThe string after left trimming: " << "BEGIN:" << leftTrim(s) << ":END";
  cout << "\nThe string after right trimming: " << "BEGIN:" << rightTrim(s) << ":END";
  cout << "\nThe string after trimming from both sides: " << "BEGIN:" << trim(s) << ":END" << endl;

  return 0;
}