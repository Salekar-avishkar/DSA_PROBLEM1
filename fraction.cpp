#include<iostream>
using namespace std;
int fractionNo=1;
int fraction(int num){
    for (int i = 1; i <= num; i++)
    {
        fractionNo=fractionNo*i;
    }
    return fractionNo;
};
int main(){
    int num;
    cin>>num;
    fraction(num);
    cout<<fractionNo;

}