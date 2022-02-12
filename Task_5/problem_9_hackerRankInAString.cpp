#include <iostream>
#include <string>
using namespace std;

string hackerrankInString(string s) {
    string str = "hackerrank";
    int count = str.length();
    int index = 0;

    if(s.length() < count)
        return "NO";

    for(int i = 0; i < s.length(); i++)
        if(s[i] == str[index])
            index++;

    return (index == count)? "YES": "NO";

}

int main()
{
    int q;
    string str;

    cin >> q;

    for(int i = 0; i < q; i++)
    {
        cin >> str;
        cout << hackerrankInString(str) << endl;
    }

    return 0;
}