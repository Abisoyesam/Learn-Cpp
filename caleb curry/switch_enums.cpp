#include <iostream>

using namespace std;

int main(){
    enum season
    {
        winter,
        summer,
        fall,
        spring
    };

    season now = winter;

    switch (now)
    {
    case winter:
        cout << "Stay Warm!!!";
        break;

    case summer:
        break;

    case fall:
        break;

    case spring:
        break;

    }

    // enum class
    /* enum class Season
    {
        winter,
        summer,
        fall,
        spring
    };

    Season now = Season::winter;

    switch (now)
    {
    case Season::winter:
        cout << "Stay Warm!!!";
        break;

    case Season::summer:
        break;

    case Season::fall:
        break;

    case Season::spring:
        break;

    } 
    USE ./switch_enums.exe -std=c++11 to compile
    */

    return 0;
}