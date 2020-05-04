#include<iostream>
#include<cmath>
using namespace std;

int findComplement(int num) {
    int count=0; int a=num;     // saving the number in variable for future computation
        
    while(num!=0){               // calculation of number of binary bits in our num , we can also do it by calculatin using count=log2(num)+1.
        int quotient=num/2;
        num=quotient;
        count++;
    }
    
    int newNum=(pow(2,count)+0.5)-1;   // calculating closest number to 5 with all the digits as "1".
    int ans=(a ^ newNum);               // using xor operator to find the answer 
    return ans;
}

int main(){
    int num; cin>>num;
    int ans=findComplement(num);
    cout<<ans<<endl;
}