#include<iostream>
using namespace std;

int main(){

    int i, x, chances=6;
    char word[15], latter, res[15];
    cout << "\nHangman game\n";
    cout << "Type the word whit de end dot: \n";
    cin >> word;

    for(i=0; word[i]!='.'; i++){
            x=i;
    }
    while(chances!=0){
        cout << "\nType a latter: \n";
        cin >> latter;
        for(i=0; i!=x; i++){
            if(latter=word[i]){
                res[i]=word[i];
            }else{
                chances--;
                cout << "\nYou lose\n";
            }
        }
    }
    
    return 0;
}