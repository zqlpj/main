#ifndef STUDENT_H
#define STUDENT_H
#include <iomanip>
#include <string>
#include "Basic.h"
#include<iostream>
using namespace std;
class Student:public Basic{
    friend class studentList;//male a friend function
protected:double subject1,subject2, spending;//储存在对象里的数据
		  Student *nextPtr;//指向下一个指针
public:Student():Basic(),nextPtr(NULL){
		   //cin>>spending>>subject1>>subject2;
	   }//结束构造函数
	   double getSum()//返回学生的总分
	   {
		   return subject1+subject2;
	   }//结束求和函数
	   double getAverage()//返回函数平均分
	   {
		   return (subject1+subject2)/2;
	   }//结束函数
};
#endif
