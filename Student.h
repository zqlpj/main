#ifndef STUDENT_H
#define STUDENT_H
#include <iomanip>
#include <string>
#include "Basic.h"
#include<iostream>
using namespace std;
class Student:public Basic{
    friend class studentList;//male a friend function
protected:double subject1,subject2, spending;//�����ڶ����������
		  Student *nextPtr;//ָ����һ��ָ��
public:Student():Basic(),nextPtr(NULL){
		   //cin>>spending>>subject1>>subject2;
	   }//�������캯��
	   double getSum()//����ѧ�����ܷ�
	   {
		   return subject1+subject2;
	   }//������ͺ���
	   double getAverage()//���غ���ƽ����
	   {
		   return (subject1+subject2)/2;
	   }//��������
};
#endif
