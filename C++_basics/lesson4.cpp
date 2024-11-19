#include<iostream>
using namespace std;

int main() {

    //contidional statement
    // 1.if else 

    int a = 5;
    if(a<=10){
        cout << "a is less than or equal to 10" << endl;
    }
    else{
        cout << "a is greater than 10" << endl;
    }

    // 2. if else if else 

    int a =10;
    int b=20;
    int c= 10;
    if (a>=b){
        cout << "a is greater than or equal to b" << endl;
    }
    else if (a>=c){
        cout << "a is greater than or equal to c" << endl;
    }
    else{
        cout << "All conditions are false" << endl;
    }

    // 3. ternary statement
    // ?:
    int a = 10;
    int b = 20;
    int max = (a > b)? a : b;
    cout << "Max value is: " << max << endl;

    // 4. switch case

    int day = 3;
    switch(day){
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }

    

    return 0;
}