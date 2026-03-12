#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s){
    int left = 0;
    int right = s.length()-1;
    while(left<=right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    if(checkPalindrome(s)){
        cout<<s<<" is a palindrome"<<endl;
    }
    else{
        cout<<s<<" is not a palindrome"<<endl;
    }
    return 0;
}