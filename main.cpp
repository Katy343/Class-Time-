#include<iostream>
#include<iomanip>
#include "Time.h"
using namespace std;

int main()
{
    Time t;

    t.printUniversal();
    t.printStandard();

    t.setTime(2,45,56);

    t.printUniversal();
    t.printStandard();
}
