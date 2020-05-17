//g++ -std=c++14 test.cpp -o out && ./out > out.txt

#include<iostream>
#include<vector>
using namespace std;

int countDown(vector<int>& arr, int k, int count, int finAns){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==k){
            k--;
            if(k==0){
            count++;
            k=finAns;
            }
        }
        else{
        k=finAns;
        }
    }
    return count; 
}


int main(){
  int testCases; cin>>testCases;
  for(int i=0;i<testCases;i++){
    int n; cin>>n; int k; cin>>k;
    vector<int>arr(n,0);
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    int count=0; int finAns=k;
    int ans=countDown(arr,k,count,finAns);
    cout<<"Case"<<" "<<"#"<<i+1<<":"<<" "<<ans<<"\n";
    
  }
  
  
    
}