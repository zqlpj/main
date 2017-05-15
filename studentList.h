#ifndef STUDENTLIST_H
#define STUDENTLIST_H
#include <iostream>
#include "Basic.h"
#include "Student.h"//Student class definition
using namespace std;
class studentList
{
public:
    //default constructor
    studentList()
    {
        head = NULL;p0=NULL;p1=NULL;
    }//end List constructor

    //insert node at front of list
    void Insert()
    {
        cout<<"请输入插入学生的信息:\n";
	cout<<"姓名"<<setw(10)<<"学号"<<setw(10)<<"性别"<<setw(10)<<"年龄"<<setw(10)<<"每月花费"<<setw(10)
                        <<"高数成绩"<<setw(10)<<"C++成绩"<<endl;
        cin>>n>>num>>s>>a>>spend>>sub1>>sub2;
        if(head==NULL)//List is Empty
        {
            head = new Student;
            head->name = n;
            head->number = num;
            head->sex = s;
            head->age = a;
            head->spending = spend;
            head->subject1 = sub1;
            head->subject2 = sub2;
            head->nextPtr = NULL;//only one node
        }//end if
        else//List is not empty
        {
            p0=head;p1=head;
            while(p1!=NULL&&num>p1->number)
            {
                p0=p1;
                p1=p1->nextPtr;
            }
            if(p1==NULL)
            {
                p1=new Student;
                p0->nextPtr = p1;
                p1->name = n;
                p1->number = num;
                p1->sex = s;
                p1->age = a;
                p1->spending = spend;
                p1->subject1 = sub1;
                p1->subject2 = sub2;
                p1->nextPtr = NULL;
            }
            else
            {
                if(p1==head)
                {
                    head = new Student;
                    head->name = n;
                    head->number = num;
                    head->sex = s;
                    head->age = a;
                    head->spending = spend;
                    head->subject1 = sub1;
                    head->subject2 = sub2;
                    head->nextPtr = p1;
                }
                else{
                    p0->nextPtr = new Student;
                    p0=p0->nextPtr;
                    p0->name = n;
                    p0->number = num;
                    p0->sex = s;
                    p0->age = a;
                    p0->spending = spend;
                    p0->subject1 = sub1;
                    p0->subject2 = sub2;
                    p0->nextPtr = p1;
                }
            }

        }//end else
    }//end function insertAtFront

    //delete node from front of list
    void Remove()
    {
        if(head==NULL)//List is empty
            cout<<"没有学生\n";//delete unsuccessful
        else
        {
            cout<<"请输入要删除的学生的学号: ";
            cin>>num;
            p0=head;p1=head;
            while(p1!=NULL&&p1->number!=num)
            {
                p0=p1;
                p1=p1->nextPtr;
            }
            if(p1==NULL)
            {
                cout<<"对不起，没有找到相关信息，请确认您输入的学号"<<endl;
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
            std::cout << "没有任何学生信息\n\n";
            return;
        }//end if
        else
        {
            std::cout << "学生名单: \n";
            while(p1!=NULL)
            {
                std::cout<<p1->name<<setw(10)<<p1->number<<setw(10)<<p1->sex<<setw(10)
                     <<p1->age<<setw(10)<<p1->spending<<setw(10)<<p1->subject1<<setw(10)<<p1->subject2<<endl;
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
            cout<<"没有学生数据!"<<endl<<endl;
        }
        else
        {
            cout<<"请输入要查找的学生的学号: ";
            cin>>num;
            while(p1!=NULL&&p1->number!=num)
            {
                p1=p1->nextPtr;
            }
            if(p1==NULL) cout<<"没有找到该学生，请确认输入的学号是否有误！"<<endl<<endl;
            else{
                std::cout<<p1->name<<setw(10)<<p1->number<<setw(10)<<p1->sex<<setw(10)
                     <<p1->age<<setw(10)<<p1->spending<<setw(10)<<p1->subject1<<setw(10)<<p1->subject2<<endl;
            }
        }
    }
private:
    Student *head,*p1,*p0;
    string n,num,s;
    int a;
    double sub1,sub2,spend;
};//end class list
#endif // LIST_H
