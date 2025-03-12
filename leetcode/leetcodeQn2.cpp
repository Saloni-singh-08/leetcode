// leetcode q.no.191:Number of bits
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n\n";
    cin>>n;
    int count=0;
    while(n!=0)
    {
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<"No. of bits in n:"<<count<<endl;
}