#include <iostream>
#include <time.h>

using namespace std;

int GetCurrentTime(void)
{
    time_t curTime = time(NULL);
    struct tm* pLocalTime = NULL;

    pLocalTime = localtime(&curTime);

    if(pLocalTime == NULL)
    {
        // time get faile then return 0
        return -1;
    }

    // ->포인터 멤버 변수
    return pLocalTime->tm_wday;
}

int main()
{
    int time = -1;
    int wDay = -1;
    time = GetCurrentTime();
    wDay = GetCurrentTime();
    if (time < 0)
        return 128;

    if(time < 10)
    {
        cout << "GooD Morning KDigital class 4";

    }
    else if  (time <20)
    {
        cout << "Good day KDigital calss 4";
    }
    else
    {
        cout << "Good evening KDigital 4";
    }
    cout << "\r\n";

     if (time < 0)
        return 128;

    switch (wDay)
    {
        case 1:
            cout << "Monday";
                break;
        case 2:
            cout << "Tuseday";
                break;
        case 3:
            cout << "Wednseday";
                break;
        case 4:
            cout << "Thursday";
                break;
        case 5:
            cout << "Friday";
                break;
        case 6:
            cout << "Thurday";
                break;
        case 7:
            cout << "Sunday";
                break;
            default:
                cout << "Nonday";
                break;
    }

    return 0;
}