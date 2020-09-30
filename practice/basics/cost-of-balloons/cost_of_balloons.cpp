/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include<iostream>

#define MAX 100

using namespace std;

void printArray(int arr[][2], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    int questions[MAX][2];
    int green, purple;
    int price_green, price_purple, total_price;
    cin >> t;

    while(t > 0){
        int n;
        price_green = 0;
        price_purple = 0;
        total_price = 0;

        int balloon[2];

        for(int i=0;i<2;i++){
            cin >> balloon[i];
        }

        if(t%2==0){
            green = balloon[0];
            purple = balloon[1];
        } else {
            green = balloon[1];
            purple = balloon[0];
        }


        // cout << "cost of green balloon: " << green << endl;
        // cout << "cost of purple ballon: " << purple << endl;

        cin >> n;

        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cin >> questions[i][j];
            }
        }

        // printArray(questions, n);

        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                if(j == 0 && questions[i][j] == 1){
                    price_green += green;
                }
                if(j == 1 && questions[i][j] == 1){
                    price_purple += purple;
                }
            }
        }

        // cout << "total price of green balloon: " << price_green << endl;
        // cout << "total price of purple balloon: " << price_purple << endl;

        total_price = price_green + price_purple;
        
        cout << total_price << endl;

        t--;
    }

    return 0;
}
