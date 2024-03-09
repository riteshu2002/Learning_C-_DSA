// Reverse a string without using any functions
# include<iostream>
using namespace std;
int main(){
    char a[]="Python";
    char b[7];
    int i;
    for(i=0;a[i]!='\0';i++){
        // no statement as it counts the length of the string
    }
    i=i-1;
    for(int j=0;i>=0;i--,j++){
        b[j]=a[i];
    }
    cout<<"Before reversing : "<<a<<endl;
    cout<<"After reversing :"<<b<<endl;
}