//g++ -std=c++14 findAllAnagramsInString.cpp -o out && ./out > out.txt

#include<iostream>
#include<vector>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    int lenP=p.length();
    int lenS=s.length();
    // int n=lenS/lenP;
    vector<int>ans;
    vector<int>freq1(26,0);
    vector<int>freq2(26,0);
    
    for(int i=0;i<lenP;i++){
        int idx=p[i]-'a';
        freq1[idx]++;
    }
    
    for(int i=0;i<lenS;i++){
        int idx=s[i]-'a';
        freq2[idx]++;

        if(i>=lenP){
            freq2[s[i-lenP]-'a']--;
        }
        int a=-1;  bool res=false;
        for(int j=0;j<26;j++){
            if(i>=lenP-1){
                if(freq1[j]==freq2[j]) {
                    res=true;
                    if(a==-1) a=i+1-lenP;
                }
                else{ 
                    res=false; 
                    break;
                }
            }
            
        }

        if(res==true) ans.push_back(a);

    }
    return ans;
}

int main(){
    string s="cbaebabacd";
    string p="abc";
    vector<int> ans=findAnagrams(s,p);
    for(int ele:ans){
        cout<<ele<<endl;
    }

}
