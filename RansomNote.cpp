//g++ RansomNote.cpp -o out && ./out > out.txt
#include<iostream>
#include<unordered_map>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<int,int> map;
    for(int i=0;i<magazine.length();i++){
        int idx=magazine.at(i)-'a';
        map[idx]++;
    }

    for(int i=0;i<ransomNote.length();i++){
        int idx=ransomNote.at(i)-'a';
        if(map.count(idx)&& map[idx]>0){
            map[idx]--;
        }
        else{ return false;}
    }
    return true;
}

int main(){
    string ransomNote="rfgatdb";
    string magazine="rtfgargdab";
    cout<<canConstruct(ransomNote,magazine)<<endl;
}
