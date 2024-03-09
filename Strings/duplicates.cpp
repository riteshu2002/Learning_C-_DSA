// Finding duplicates in string using Hashtable
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    cin>>s;
    unordered_map <char, int> charcount;
    for(char c: s){
        charcount[c]++;
    }
    for(const auto& pair: charcount)
    {
        if(pair.second>1){
            cout<<pair.first<<": "<<pair.second<<endl;
        }
    }
    
}