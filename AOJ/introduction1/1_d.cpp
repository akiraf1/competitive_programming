#include <iostream>
using namespace std;
#include <string>
 
int main()
{
    int S, hour, minute, second;
    cin >> S;
    hour = S / 3600;
    minute = (S - 3600 * hour) / 60;
    second = S % 60;
    cout << hour << ":" << minute << ":" << second << endl;
}