#include <iostream>
#include <string>
#include "Basic.h"
#include "Student.h"
#include "studentList.h"
#include "Teacher.h"
#include "teacherList.h"
#include "Administrator.h"
#include "administratorList.h"
using namespace std;

//display program instructions to users
void instructions()
{
    cout << "��ѡ������Ĺ���:\n"
         << "��ѧ���йصĲ����밴  1\n"
         << "����ʦ�йصĲ����밴  2\n"
         << "�������Ա�йصĲ����밴  3\n"
         << "�˳������밴 4\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}//end the construction

void stu(studentList &stuObject)
{
    int choice;//store the second choice
    cout<<"���ѧ���밴  1\n"
        <<"ɾ��ѧ���밴  2\n"
        <<"����ѧ���밴  3\n"
        <<"��ӡѧ���밴  4\n"
        <<"�˳���ǰ�����밴 5\n"<<endl<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    do{
        cout<<"?";
        cin>>choice;
        switch(choice){
        case 1:
            stuObject.Insert();
            break;
        case 2:
            stuObject.Remove();
            break;
        case 3:
            stuObject.Search();
            break;
        case 4:
            stuObject.print();
        }
    }while(choice<5);
}

void teach(teacherList &teachObject)
{
    int choice;//store the second choice
    cout<<"��ӽ�ʦ�밴  1\n"
        <<"ɾ����ʦ�밴  2\n"
        <<"���ҽ�ʦ�밴  3\n"
        <<"��ӡ��ʦ�밴  4\n"
        <<"�˳���ǰ�����밴 5\n"<<endl<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    do{
        cout<<"?";
        cin>>choice;
        switch(choice){
        case 1:
            teachObject.Insert();
            break;
        case 2:
            teachObject.Remove();
            break;
        case 3:
            teachObject.Search();
            break;
        case 4:
            teachObject.print();
        }
    }while(choice<5);
}

void admini(administratorList &adminiObject)
{
    int choice;//store the second choice
    cout<<"��ӹ�����Ա�밴  1\n"
        <<"ɾ��������Ա�밴  2\n"
        <<"���ҹ�����Ա�밴  3\n"
        <<"��ӡ������Ա�밴  4\n"
        <<"�˳���ǰ�����밴 5\n"<<endl<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    do{
        cout<<"?";
        cin>>choice;
        switch(choice){
        case 1:
            adminiObject.Insert();
            break;
        case 2:
            adminiObject.Remove();
            break;
        case 3:
            adminiObject.Search();
            break;
        case 4:
            adminiObject.print();
        }
    }while(choice<5);
}
int main()
{
    studentList stu1;
    teacherList teacher1;
    administratorList Administrator1;
    instructions();
    int choice1;
    do{
        cout<<"��ѡ��:";
        cin>>choice1;
        switch(choice1)
        {
            case 1:
                stu(stu1);
                break;
            case 2:
                teach(teacher1);
                break;
            case 3:
                admini(Administrator1);
                break;
        }
    }while(choice1<4);
    return 0;
}
