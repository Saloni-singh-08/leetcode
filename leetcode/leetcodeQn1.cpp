// leetcode q.no.1281: Subtract the Product and Sum of digits of an integer
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number\n";
    cin>>n;
    int product=1;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        product=product*digit;
        sum=sum+digit;
        n=n/10;
    }
    int ans=product-sum;
    cout<<"answer is:"<<ans;
     
}