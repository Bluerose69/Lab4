// Lab4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream.h>
#include <conio.h>
#include <fstream.h>
const num = 255;



int main()
{ ifstream F;
  ofstream F1;
  char s[num] = "";
  int n = 0;
  char c;
  cout << "Vvedite put' k failu:";
  cin.getline(s,num);
  cout << "\n\n\n\n\n\n\n";
  cout << "Sodergimoe faila:\n----------------------------------------\n" << endl;
  F.open(s);
  int i = 0;
  while(!F.eof())
  { F.get(c);
    cout << c;
    if (n<3) i++;
    if (c == '!' || c == '.' || c == '?') n++;
  }
  F.clear();
  F.seekg(0, ios::beg);
  char *s1 = new char [i+1];
  F.getline(s1,i+1,'\0');
  F.close();
  F1.open("D:\\output.txt");
  n = i;
  for (int i = n; i>=0; i--)
  { if (i == 0 || s1[i-1] == '!' || s1[i-1] == '.' || s1[i-1] == '?')
   {  for (int j = i; j<n; j++)
    if (s1[j] != '\n') F1 << s1[j];
     n = i;}
  }
  F1.close();
  getch();

  return 0;
}
//---------------------------------------------------------------------------
