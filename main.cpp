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
    cout << "请选择下面的功能:\n"
         << "与学生有关的操作请按  1\n"
         << "与老师有关的操作请按  2\n"
         << "与管理人员有关的操作请按  3\n"
         << "退出操作请按 4\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}//end the construction

void stu(studentList &stuObject)
{
    int choice;//store the second choice
    cout<<"添加学生请按  1\n"
        <<"删除学生请按  2\n"
        <<"查找学生请按  3\n"
        <<"打印学生请按  4\n"
        <<"退出当前操作请按 5\n"<<endl<<endl;
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
    cout<<"添加教师请按  1\n"
        <<"删除教师请按  2\n"
        <<"查找教师请按  3\n"
        <<"打印教师请按  4\n"
        <<"退出当前操作请按 5\n"<<endl<<endl;
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
    cout<<"添加管理人员请按  1\n"
        <<"删除管理人员请按  2\n"
        <<"查找管理人员请按  3\n"
        <<"打印管理人员请按  4\n"
        <<"退出当前操作请按 5\n"<<endl<<endl;
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
        cout<<"请选择:";
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
