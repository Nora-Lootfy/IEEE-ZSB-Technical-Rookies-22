#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int test;
    string S, T;
    int s[26], t[26];
    int count;

    cin >> test;
    
    for(int x = 1; x <= test; x++)
    {
        count = 0;

        cin>> S >> T;

        for(int i = 0; i < 26; i++)
            s[i] = t[i] = 0;

        for(char i : S)
        {
            //verfiy that all characters are lowercase
            int index = ( i | 0x20 ) - 97;
            //cout << index << endl;
            s[index]++;
        }

        for(char i : T)
        {
            //verfiy that all characters are lowercase
            int index = ( i | 0x20 ) - 97;
            //cout << index << endl;
            t[index]++;
        }

        for(int i = 0; i < 26; i++)
            count += abs(s[i] - t[i]);
        
        cout << count << endl;
    }

    return 0;
}