#include<iostream>
using namespace std;
int main(){
  int id[]={101,102,103,101,104,102};
  int n=6;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(id[i]==id[j]){
        cout<<"Duplicate id"<< id[i]<<endl;
        break;
      }
    }
  }
  return 0;
}