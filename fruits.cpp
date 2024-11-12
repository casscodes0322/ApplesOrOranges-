#include <bits/stdc++.h> //opens all libraries
using namespace std;

int main(){

    string fruit;

    cout << "Do you like apples or oranges?" << endl;
    cin >> fruit;

        if (fruit == "apples" || fruit == "oranges" ) {
            cout << "Cool!" << endl;
            } else {
            cout << "That wasn't one of the options!";
        }

        return 0;

}