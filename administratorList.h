#ifndef ADMINISTRATORLIST_H
#define ADMINISTRATORLIST_H
#include <iostream>
#include <iomanip>
#include "Basic.h"
#include "Administrator.h"//Student class definition
using namespace std;
class administratorList
{
public:
    //default constructor
    administratorList()
    {
        p0=NULL;p1=NULL;head=NULL;
    }//end List constructor

    //insert node at front of list
    void Insert()
    {
        cout<<"��������������Ա����Ϣ:\n";
        cout<<"����"<<setw(10)<<"ѧ��"<<setw(10)<<"�Ա�"<<setw(10)<<"����"<<setw(10)<<"����"<<setw(10)
                        <<"�¹���"<<setw(10)<<"������"<<endl;
        cin>>n>>num>>s>>a>>depart>>salary>>work;
        if(head==NULL)//List is Empty
        {
            head = new Administrator;
            head->name = n;
            head->number = num;
            head->sex = s;
            head->age = a;
            head->department = depart;
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
                 p1 = new Administrator;
                 p0->nextPtr = p1;
                 p1->name = n;
                 p1->number = num;
                 p1->sex = s;
                 p1->age = a;
                 p1->department = depart;
                 p1->month_salary = salary;
                 p1->work_hours = work;
                 p1->nextPtr = NULL;
             }
             else
             {
                 if(p1==head)
                 {
                    head = new Administrator;
                    head->name = n;
                    head->number = num;
                    head->sex = s;
                    head->age = a;
                    head->department = depart;
                    head->month_salary = salary;
                    head->work_hours = work;
                    head->nextPtr = p1;
                 }
                 else{
                    p0->nextPtr = new Administrator;
                    p0=p0->nextPtr;
                    p0->name = n;
                    p0->number = num;
                    p0->sex = s;
                    p0->age = a;
                    p0->department = depart;
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
            cout<<"û�й���Ա\n";//delete unsuccessful
        else
        {
            cout<<"������Ҫɾ���Ĺ���Ա�Ĺ���: ";
            cin>>num;
            p0=head;p1=head;
            while(p1!=NULL&&p1->number!=num)
            {
                p0=p1;
                p1=p1->nextPtr;
            }
            if(p1==NULL)
            {
                cout<<"�Բ���û���ҵ������Ϣ����ȷ��������Ĺ���"<<endl;
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
            std::cout << "û���κι���Ա��Ϣ\n\n";
        }//end if
        else
        {
            std::cout << "����Ա����: \n";
            while(p1!=NULL)
            {
                std::cout<<p1->name<<setw(10)<<p1->number<<setw(10)<<p1->sex<<setw(10)
                     <<p1->age<<setw(10)<<p1->department<<setw(10)<<p1->month_salary<<setw(10)<<p1->work_hours<<endl;
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
            cout<<"û����ع���Ա����!"<<endl<<endl;
        }
        else
        {
            cout<<"������Ҫ���ҵĹ���Ա�Ĺ���: ";
            cin>>num;
            while(p1!=NULL&&p1->number!=num)
            {
                p1=p1->nextPtr;
            }
            if(p1==NULL) cout<<"û���ҵ��ù���Ա����ȷ������Ĺ����Ƿ�����"<<endl<<endl;
            else{
                std::cout<<p1->name<<setw(10)<<p1->number<<setw(10)<<p1->sex<<setw(10)
                     <<p1->age<<setw(10)<<p1->department<<setw(10)<<p1->month_salary<<setw(10)<<p1->work_hours<<endl;
            }
        }
    }
private:
    Administrator *head,*p0,*p1;//pointer to first node
    string n,num,s,depart;
    double salary;
    int work,a;
};//end class list
#endif // LIST_H
