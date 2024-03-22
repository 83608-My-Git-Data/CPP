#include<iostream>
using namespace std;
class Time {
    private:
    int hours, minutes, seconds;

    public:

    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    void setHours(int newHours) { hours= newHours; }

    int getHours() { return hours;}

    void setMinutes(int newMinutes) { minutes = newMinutes; }

    int getMinutes() { return minutes;}

    void setSeconds(int newSeconds) { seconds = newSeconds; }

    int getSeconds() { return seconds; }

    void displayTime() { cout<<hours<<":"<<minutes<<":"<<seconds<<endl; }
};

int main() {
        Time *t1 = new Time;
        Time *t2 = new Time(3,40,5);

        t1->displayTime();
        t2->displayTime();

        t2->setHours(10);
        t2->setMinutes(10);
        t2->setSeconds(10);

        t2->displayTime();

        delete t1;
        delete t2;




    

    // int *x = new int;
    // *x = 10;
    // cout<< *x <<endl;
    // cout<< x <<endl;
    // cout<< &x <<endl;
    // delete x;
    return 0;

    


}

