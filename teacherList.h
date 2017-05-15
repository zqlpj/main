#ifndef TEACHERLIST_H
#define TEACHERLIST_H
#include <iostream>
#include <iomanip>
#include "Basic.h"
#include "Teacher.h"//Student class definition
using namespace std;
class teacherList
{
public:
    //default constructor
    teacherList()
    {
        p0=NULL;p1=NULL;head=NULL;
    }//end List constructor

    //insert node at front of list
    void Insert()
    {
        cout<<"请输入插入老师的信息:\n";
	cout<<"姓名"<<setw(10)<<"学号"<<setw(10)<<"性别"<<setw(10)<<"年龄"<<setw(10)<<"所教科目"<<setw(10)
                        <<"月工资"<<setw(10)<<"工作量"<<endl;
        cin>>n>>num>>s>>a>>sub>>salary>>work;
        if(head==NULL)//List is Empty
        {
            head = new Teacher;
            head->name = n;
            head->number = num;
            head->sex = s;
            head->age = a;
            head->subject = sub;
            head->month_salary = salary;
            head->work_hours = work;
            head->nextPtr = NULL;
        }//new list has only one node
        else//List is not empty
        {
             p1=head;p0=head;
             while(p1!=NULL&&num>p1->number)
             {
                 p0=p1;
                 p1=p1->nextPtr;
             }
             if(p1==NULL)
             {
                 p1 = new Teacher;
                 p0->nextPtr = p1;
                 p1->name = n;
                 p1->number = num;
                 p1->sex = s;
                 p1->age = a;
                 p1->subject = sub;
                 p1->month_salary = salary;
                 p1->work_hours = work;
                 p1->nextPtr = NULL;
             }
             else
             {
                 if(p1==head)
                 {
                    head = new Teacher;
                    head->name = n;
                    head->number = num;
                    head->sex = s;
                    head->age = a;
                    head->subject = sub;
                    head->month_salary = salary;
                    head->work_hours = work;
                    head->nextPtr = p1;
                 }
                 else{
                    p0->nextPtr = new Teacher;
                    p0=p0->nextPtr;
                    p0->name = n;
                    p0->number = num;
                    p0->sex = s;
                    p0->age = a;
                    p0->subject = sub;
                    p0->month_salary = salary;
                    p0->work_hours = work;
                    p0->nextPtr = p1;
                 }
             }
        }//end else
    }//end function insertAtFront

    //delete node from front of list
    void Remove()
    {
        if(head==NULL)//List is empty
            cout<<"没有老师\n";//delete unsuccessful
        else
        {
            cout<<"请输入要删除的老师的工号: ";
            cin>>num;
            p0=head;p1=head;
            while(p1!=NULL&&p1->number!=num)
            {
                p0=p1;
                p1=p1->nextPtr;
            }
            if(p1==NULL)
            {
                cout<<"对不起，没有找到相关信息，请确认您输入的工号"<<endl;
            }
            else
            {
                if(p1==head)
                {
                    p0=head;
                    head=head->nextPtr;
                    delete p0;
                }
                else{
                    p0->nextPtr = p1->nextPtr;
                    delete p1;
                }
            }
        }//end else
    }//end function removeFromFront

    //display contents is List
    void print()
    {
        p1=head;
        if(head==NULL)//list is empty
        {
            std::cout << "没有任何教师信息\n\n";
        }//end if
        else
        {
            std::cout << "教师名单: \n";
            while(p1!=NULL)
            {
                std::cout<<p1->name<<setw(10)<<p1->number<<setw(10)<<p1->sex<<setw(10)
                     <<p1->age<<setw(10)<<p1->subject<<setw(10)<<p1->month_salary<<setw(10)<<p1->work_hours<<endl;
                p1 = p1->nextPtr;
            }
            std::cout<<"\n\n";
        }
    }//end function print
    void Search()
    {
        p1=head;
        if(p1==NULL)
        {
            cout<<"没有相关教师数据!"<<endl<<endl;
        }
        else
        {
            cout<<"请输入要查找的教师的工号: ";
            cin>>num;
            while(p1!=NULL&&p1->number!=num)
            {
                p1=p1->nextPtr;
            }
            if(p1==NULL) cout<<"没有找到该教师，请确认输入的工号是否有误！"<<endl<<endl;
            else{
                std::cout<<p1->name<<setw(10)<<p1->number<<setw(10)<<p1->sex<<setw(10)
                     <<p1->age<<setw(10)<<p1->subject<<setw(10)<<p1->month_salary<<setw(10)<<p1->work_hours<<endl;
            }
        }
    }
private:
    Teacher *head,*p0,*p1;//pointer to first node
    string n,num,s,sub;
    double salary;
    int work,a;
};//end class list
#endif // LIST_H
