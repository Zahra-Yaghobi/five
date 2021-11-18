#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int cnt = 0;
    cout << "Enter a Sentence: ";
    getline(cin, str);

    int s= str.size();
    for (int i = 0; i<s ;i++) {
        if (str[i] == ' ')
            cnt++;
    }
    cout << "Number of words: " << cnt + 1 << "\n";
    return 0;
}