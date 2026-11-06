#include<iostream>
using namespace std;
int main(){
  string status[]={"Delivered", "Pending", "Cancelled", "Delivered", "Pending"};
  int d=0;
  int p=0;
  int c=0;
  for(int i=0;i<5;i++){
    if(status[i]=="Delivered"){
      d++;
    }else if(status[i]=="Pending"){
        p++;
      }else if(status[i]=="Cancelled"){
        c++;
      }

    }
    cout<<"Cancelled: "<< c<<endl;
    cout<<"Pending: "<< p<<endl;
    cout<<"Delivered: "<< d<<endl;
    return 0;
  }
