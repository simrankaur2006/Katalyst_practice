#include<iostream>
using namespace std;
int main(){
  float amount, bill;
  cout<<"Enter purchase amount";
  cin>> amount;

  if(amount<2000){
    bill=amount;
  }else if(amount<=5000){
    bill=amount-(amount *0.10);
  }else {
    bill=amount-(amount*0.20);
  }
  cout<<"The final bill is Rs."<<bill<<endl;
  return 0;
}