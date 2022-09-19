#include<iostream>
using namespace std;

class Date{
    private:
        int year;
        int month;
        int date;
    public:
        Date(int d,int m,int y)
        {
            year=y;
            month=m;
            date=d;
        }
        void display_date(void)
        {
            cout<<date<<"-"<<month<<"-"<<year<<endl;
        }

};
int main()
{
    Date d1(07,01,2004);
    Date d2(30,03,2022);
    d1.display_date();
    d2.display_date();
}