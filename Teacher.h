#ifndef TEACHER_H
#define TEACHER_H
#include <string>
#include "Basic.h"
#include<iostream>
using namespace std;
class Teacher:public Basic{
    friend class teacherList;//male a friend function
protected:string subject;
          double month_salary;
          int work_hours;//�����ڶ����������
		  Teacher *nextPtr;//ָ����һ��ָ��
public:Teacher():Basic(),nextPtr(NULL){
		   //cin>>subject>>month_salary>>work_hours;
	   }//�������캯��
};
#endif
