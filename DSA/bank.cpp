
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1000, -500, 2000, -300, 1500};

    int n = 5;
    int deposit = 0;
    int withdrawal = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] > 0) {
            deposit = deposit + arr[i];
        }
        else {
            withdrawal = withdrawal + (-arr[i]);
        }
    }

    int net = deposit - withdrawal;

    cout << "Deposits: " << deposit << endl;
    cout << "Withdrawals: " << withdrawal << endl;
    cout << "Net Change: " << net << endl;

    return 0;
}
