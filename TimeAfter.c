
#include <iostream>

using namespace std;

int main()
{
    int hour, minute;
    int add;
    int add_hour;
    cin >> hour >> minute;
    cin >> add;

    minute += add;

    if (minute >= 60 ) {
        add_hour = minute / 60;
        minute %= 60;
        add_hour %= 24;
        hour += add_hour;
    }

    if (hour >= 24) {
        hour %= 24;
    }



    if (hour>9 && minute >9) {
        cout << hour << " " << minute;
    }

    else if (hour > 9 && minute <10){
        cout << hour << " 0" << minute;
    }

    else if (hour < 10 && minute > 9){
        cout << "0" << hour << " " << minute;
    }

    else if (hour < 10 && minute < 10){
        cout << "0" << hour << " 0" << minute;
    }

}
