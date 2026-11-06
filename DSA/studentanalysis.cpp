#include<iostream>
using namespace std;
int main(){
  int attendance[]= {85,60,90,72,95};
  int n=5;
  int sum=0;
  cout<<"Low Attendance: ";
  for (int i = 0; i < n; i++) {
        sum = sum + attendance[i];

        if (attendance[i] < 75) {
            cout << attendance[i] << " ";
        }
    }

    float avg = (float)sum / n;

    cout << "\nAverage: " << avg << "%";

    return 0;
}