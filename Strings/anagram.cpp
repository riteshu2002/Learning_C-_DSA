/*
        An anagram is a word or phrase formed by rearranging the letters of another word or phrase, 
        typically using all the original letters exactly once. In other words, two words are anagrams of 
        each other if they contain the same characters, just arranged differently.
        For example:

        "listen" and "silent" are anagrams of each other because they contain the same letters.
        "debit card" and "bad credit" are anagrams of each other.

*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    char a[]="medical";
    char b[]="decimal";
    int i, h[26]={0};

    for(i=0;a[i]!='\0';i++){ // marking all char places in hash table as 1
        h[a[i]-'a']+=1;
    }
    for(i=0;b[i]!='\0';i++){ // un marking all the marked places 
        h[b[i]-'a']-=1;
        if(h[b[i] - 'a']<0){
            cout<<"not an anagram"<<endl;
            return 0;
        }
    }
    if(b[i]=='\0'){ 
        cout<<"Its an anagram"<<endl;
    }

    else{
        cout<<"Not an anagram";
    }
    return 0;
}