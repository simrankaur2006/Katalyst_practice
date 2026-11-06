#include<iostream>
using namespace std;
int main(){
  int salary[]={2500,4000,3500,40000,30000};
  int highest=0;
  int sechighest=0;
  int lowest=salary[0];
  int n = sizeof(salary) / sizeof(salary[0]);
  for(int i=0;i<n;i++){
    if(salary[i]>highest){
      highest=salary[i];
    }
    if(salary[i]<highest && salary[i]> sechighest){
      sechighest=highest;
      highest=salary[i];
    }
    if(salary[i]<lowest){
      lowest=salary[i];
    }
    cout<<"Lowest: "<<lowest<<endl;
    cout<<"Highest: "<<highest<<endl;
    cout<<"Second Highest"<<sechighest<<endl;
    return 0;
    
  }
}