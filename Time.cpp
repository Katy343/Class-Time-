//Time.cpp
#include<iostream>
#include<iomanip>
#include<stdexcept>
#include "Time.h"
using namespace std;

//constructor
  Time::Time()
  {
      hour=minute=second=0;
  } //end constructor

  void Time::setTime(int h, int m, int s)
  {
      if ((h>=0 && h<60) && (m>=0 && m<60) && (s>=0 && s<60))
        hour=h;
        minute=m;
        second=s;
  } //end function setTime

  void Time::printUniversal()
  {
      cout<<"Universal time is"<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;
  } //end printUniversal

  void Time::printStandard()
  {


      cout<<((hour==0)||(hour==12)?12 : (hour%12))<<setfill('0')<<setw(2)<<hour<<":"<<minute<<":"<<setw(2)<<second<<endl;
  } //end printStandard
