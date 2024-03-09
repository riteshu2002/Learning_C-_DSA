// Permutations of a string

#include<iostream>
using namespace std;

void perm(char s[], int k, char res[]){
    static int a[10];  // Static array to keep track of used characters
    
    int i;
    if(s[k]=='\0'){  // Base case: when all characters are placed
        res[k]='\0';  // Terminating the result string
        cout<<res<<endl; // Printing the permutation
    }
    else{
        for(i=0;s[i]!='\0';i++){
            if(a[i]==0){ // Check if the character is unused
                res[k]=s[i]; // Placing the character in the result string
                a[i]=1;  // Marking the character as used
                perm(s,k+1,res); // Recur for the next position
                a[i]=0; // Reset the usage status for backtracking

            } 
        }
    }
}
int main(){
    char s[]="abc";
    char res[10];
    perm(s,0,res);
    return 0;
}