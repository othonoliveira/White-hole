#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

    char word[30], letter, secret[30];
    int tam, i, chances, rights;
    bool right;
    
    chances=6;
    tam=0;
    i=0;
    right=false;
    rights=0;

    cout << "\nType a word: ";
    cin >> word;
    system("cls");

    while(word[i]!='\0'){
        i++;
        tam++;
    }

    for(i=0; i<30; i++){
        secret[i]='_';
    }

    while((chances > 0) && (rights < tam)){
        cout << "Remaining attempts: " << chances << "\n\n";
        cout << "Secret word: ";
        for(i=0; i<tam; i++){
            cout << secret[i];
        }
        cout << "\n\nType a letter: ";
        cin >> letter;
        for(i=0; i<tam; i++){
            if(word[i]==letter){
                right=true;
                secret[i]=word[i];
                rights++;
            }
        }
        if(!right){
            chances--;
        }
        right=false;
        system("cls");
    }
    if(rights==tam){
        cout << "\nYou win!\n";
    }else{
        cout << "\nWhat a shame, you lose!\n";
    }
    system("pause");

    return 0;
}