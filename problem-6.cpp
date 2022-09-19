#include<iostream>
#include<string.h>
using namespace std;
class Student{
    private:
        int rno;
        char name[20];
    public:
    Student(int r,char n[])
    {
        rno=r;
        strcpy(name,n);
    }
    void display_data()
    {
        cout<<"------------------------"<<endl;
        cout<<"Roll no -> "<<rno<<endl;
        cout<<"Name -> "<<name<<endl;
    }
};

int main()
{
    Student s1(17,"kalyani");
    Student s2(1,"xyz");
    s1.display_data();
    s2.display_data();
}