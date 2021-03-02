#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

    int i, x, chances=6,a;
    char word[15], latter, res[15];
    cout << "\nHangman game\n";
    cout << "Type the word with de end dot: \n";
    cin >> word;
    system("cls");
    
    for(i=0; word[i]!='.'; i++){
            x=i+1;
    }
    for(a=0; a<x; a++){
        res[a]='_';
    }
    res[x]='.';
    cout << res[x+1];
    while(chances>0){
        cout << "\nType a latter: \n";
        cin >> latter;
        for(i=0; i<x & chances>0; i++){
            if(latter==word[i]){
                res[i]=word[i];
            }
            if(res==word){
                cout << "\nYou won\n";
                return 0;
            }
        }
        cout << res << "\n" << word;
    }

    cout << "\nYou lose\n";
  
    return 0;
}