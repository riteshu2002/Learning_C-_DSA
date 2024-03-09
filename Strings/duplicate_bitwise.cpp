// find duplicate using bitwise operators

#include<iostream>

using namespace std;
int main(){
    char a[]="finding";
    long int h=0;
    int i;
    for( i=0;a[i]!='\0';i++){
        int bitpos = a[i]-'a';
        long int x=1;
        x = x<< bitpos;
        
           if((x & h) !=0){
            cout<<"char duplicated are : "<<a[i]<<endl;
        }
        else{
            h = h|x;
        }
    }
   return 0;
}