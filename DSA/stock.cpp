#include<iostream>
using namespace std;
int main(){
  int stock[]={10,5,8};
  int sold[]={4,5,3};
  int n=3;
  cout<<"Reamaining Stock";
  for(int i=0;i<n;i++){
    stock[i]=stock[i]-sold[i];
    cout<<stock[i]<<" "<<endl;

  }
  cout<<"Out of stock";
  for (int i = 0; i < n; i++) {
        if (stock[i] == 0) {
            cout << "Product " << i + 1;
        }
    }

    return 0;
}