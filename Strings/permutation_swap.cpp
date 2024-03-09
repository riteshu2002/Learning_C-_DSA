// Permutaion of string using swap

#include<iostream>
#include<algorithm>
#include<cstring> // Included <cstring> header for strlen function
using namespace std;

void perm(char s[], int l, int h){
    int i;
    if(l==h){
        cout<<s<<endl;
    }
    else{
        for(i=l;i<=h;i++){
            swap(s[l], s[i]);
            perm(s,l+1,h);
            swap(s[l],s[i]); // Backtrack: undo the swap for the next iteration
        }
    }
}
int main(){
    char s[]="abc";
    
    int h=strlen(s);
    perm(s,0,h-1);
}