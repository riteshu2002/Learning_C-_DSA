// from upper case to lower case
/* 
        As we know asci code 
        A=65        a=97    // 97 - 65 = 32
        B=66        b=98    // 98 - 66 = 32 .. so we can see that difference is 32
        ..          ..
        z=90        z=122
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    char s[]="WELCOME"; // all in upper case
    
    int i;
    for(i=0;s[i]!='\0';i++){
        s[i]=s[i]+32;
    }
    cout<<"Upper case to lower: "<<s<<endl;
    // Now takin both upper and lower case 
    char a[]="WeLcOmE";
    int j;
    for(j=0;a[j]!='\0';j++){
        if(a[j]>=65 && a[j]<=90){
            a[j]+=32;
        }
        else if(a[j]>=97 && a[j]<=122){
            a[j]-=32;
        }
    }
    cout<<"Upper lower mix output:"<<a<<endl;
}