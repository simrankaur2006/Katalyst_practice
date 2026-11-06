#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string words[100];
    int freq[100] = {0};
    int count = 0;

    string word;
    stringstream ss(s);

    while (ss >> word) {
        int i;

        for (i = 0; i < count; i++) {
            if (words[i] == word) {
                freq[i]++;
                break;
            }
        }

        if (i == count) {
            words[count] = word;
            freq[count] = 1;
            count++;
        }
    }

    int max = 0;

    for (int i = 0; i < count; i++) {
        cout << words[i] << ": " << freq[i] << " | ";

        if (freq[i] > freq[max]) {
            max = i;
        }
    }

    cout << "Most Frequent: " << words[max];

    return 0;
}
