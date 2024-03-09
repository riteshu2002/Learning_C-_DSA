// checking if a string is palioindrome or not
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string a ;
    cout<<"Enter a string :";
    cin>>a;
    transform(a.begin(), a.end(), a.begin(),::tolower); // changing uppercase char to lower case
    string b = a;
     reverse(b.begin(), b.end());
     if(a == b){
        cout<<"Yes it is palindrome"<<endl;
     }
     else{
        cout<<"Its not palindrome"<<endl;     }


}