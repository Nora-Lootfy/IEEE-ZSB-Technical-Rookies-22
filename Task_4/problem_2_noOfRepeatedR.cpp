#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int num;
    int countR = 0;

    cin >> str >> num;

    for (int i = 0; i < str.length(); i++)
    {
        countR += (str[i] == 'r' || str[i] == 'R') ? 1 : 0;
    }

    countR *= num / str.length();

    for (int i = 0; i < num % str.length(); i++)
        countR += (str[i] == 'r' || str[i] == 'R') ? 1 : 0;

    cout << countR;

    return 0;
}