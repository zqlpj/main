#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include <string>
#include "Basic.h"
#include<iostream>
using namespace std;
class Administrator:public Basic{
    friend class administratorList;//male a friend function
protected:string department;
          double month_salary;
          int work_hours;//store data in object
		  Administrator *nextPtr;//point to next node
public:Administrator():Basic(),nextPtr(NULL){
		   //cin>>department>>month_salary>>work_hours;
	   }//end the construction function
};
#endif
