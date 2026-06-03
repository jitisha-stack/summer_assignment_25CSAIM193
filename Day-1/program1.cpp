#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter Positive Number: ";
    cin>>n;
    for(int i=0; i<=n; i++){
        sum = sum+i;
    }
    cout<<"Sum of Positive Natural Number : "<<sum<<endl;

}