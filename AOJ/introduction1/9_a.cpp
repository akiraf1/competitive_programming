#include <iostream>
#include <string>
using namespace std;


string downcase(string text)
{
    string res = "";
    for (int i = 0; i < text.size(); i++) {
        if (int(text[i]) >= 65 && int(text[i]) <= 90) {
            res += char(int(text[i]) + 32);
        }else {
            res += text[i];
        }
    }
    return res;
}


int main()
{
    int idx, count = 0;
    string word, text = " ", text_row;
    
    getline(cin, word);
    word = downcase(word);

    while(1) {
        getline(cin, text_row);
        if (text_row == "END_OF_TEXT") break;
        text += downcase(text_row) + " ";
    }

    while(1) {
        idx = text.find(" " + word + " ");
        if (idx == string::npos) break;
        count += 1;
        text = text.substr(idx + word.size());
    }

    cout << count << endl;

    return 0;
}