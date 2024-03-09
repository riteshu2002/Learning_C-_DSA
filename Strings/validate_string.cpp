// Check whether the string is valid or not
# include<iostream>
using namespace std;

int valid(char * name){
    for (int i=0; name[i]!='\0';i++){
        if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57)){
            return 0;
        }

    }
    return 1;
}
// OR THere is another way using string not char 

bool isvalid(const string& name1){
    for(char c : name1){
         if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            continue;
         }
         else{
            return false;
         }
    }
    return true;
}

int main(){
    char *name = "Anil?>123";
    if(valid(name)){
        cout<<"Its a valid string"<<endl;
    
    }
    else{
        cout<<"Not a valid string"<<endl;
    }
    string name1 = "Reeteshu23??g";
    if(isvalid(name1)){
        cout<<"String is valid"<<endl;
    }
    else{
        cout<<"String is not valid"<<endl;
    }
}