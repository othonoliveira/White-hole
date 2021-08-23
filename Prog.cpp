#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#define TAM 10
using namespace std;

int main(){
    int i, n, x=0, v1[TAM], v2[TAM];
    scanf("%d", &n);
    for (i=0; i<TAM; i++){
        v1[i]=i+n;
    }
    for (i=0; i<TAM; i=i+2){
        v2[i/2]=v1[i];
    }
    for (i=0; i<TAM/2; i++){
        x=x+v2[i];
    }
    printf("%i", x+n);
    return 0;
}