#include<bits/stdc++.h>
using namespace std;
void reverseString(string &s){
    int left = 0;
    int right = s.length()-1;
    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    s = tolower(s);
    reverseString(s);
    cout<<"Reversed string: "<<s<<endl;
    return 0;
}