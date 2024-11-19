#include <iostream>
using namespace std;

int main()
{
    // patterns problems

    // 1. Printing a square pattern
    // 1234
    // 1234
    // 1234
    // 1234

    // for(int i=0; i<4; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<j+1;
    //     }
    //     cout<<endl;
    // }

    // 2. Printing a triangle pattern

    // for(int i=0; i<4; i++){
    //     for(int j=0;j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 3. Printing a character triangle

    // char ch = 'A';
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }

    // 4. Inverted triangle

    // for(int i = 0; i <4;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<" ";
    //     }
    //     for(int k=0; k<4-i;k++){
    //         cout<<(i+1)<<" ";
    //     }
    //     cout<<endl;
    // }

    // 5.Pyramid

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 4; j > i; j--)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k <=i ; k++){
    //         cout << (k+1);
    //     }
    //     for (int l = i; l >0; l--){
    //         cout << (l);
    //     }
    //     cout << endl;
    // }

    // 6. hollow diamond

    // for(int i = 0; i < 5 ;i++){
    //     for(int j = 5; j > i ; j--){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i!=0){
    //         for(int j = 0; j <2*i-1; j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
     
    // for(int i = 5; i >=0 ;i--){
    //     for(int j = 5; j > i ; j--){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i!=0){
    //         for(int j = 0; j <2*i-1; j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
   
    // 7. butterfly 's triangle
    int n=4;
    for (int i = 1; i <= n; i++) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
        for (int i = n; i >=1; i--) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
 


    return 0;
}