#include<iostream>
using namespace std;

int mian(){

    // loops
    // 1. for loop
    for(int i=0; i<5; i++){
        cout << i << " ";
    }
    // 2. while loop
    int j=0;
    while(j<5){
        cout << j << " ";
        j++;
    }
    // 3. do-while loop
    int k=0;
    do{
        cout << k << " ";
        k++;
    } while(k<5);

    return 0;
}