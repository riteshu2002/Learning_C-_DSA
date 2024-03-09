// Comparing string 
#include<iostream>

using namespace std;
int main(){
    char a[]="Painter";
    char b[]="Painting";
    int i,j;
    for(i=0,j=0;a[i]!='\n',b[j]!='\0';i++,j++){
        if(a[i]!=b[j]){
            break;
        }
    }
    if(a[i]==b[j]){
        cout<<"They are equal"<<endl;
    }
    else if(a[i]< b[j]){
        cout<<" string a is smaller then B"<<endl;
    }
}