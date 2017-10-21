// Lab4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

int main()
{
    ﻿// Lab4.cpp : Defines the entry point for the console application.
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

    return 0;
}

