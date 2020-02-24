#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void profilePic(int length, int width, int height){
    if ((width < length) || (length > height)){
        cout << "UPLOAD ANOTHER" << endl;
    }
    else if ((width >= length) && (height >= length)){
        if(width == height){
            cout << "ACCEPTED" << endl;
        }
        else{
            cout << "CROP IT" << endl;
        }
    }
}

int main() {
    int length, testCases;
    cin >> length;
    cin >> testCases;
    int a[2];
    int i = 0;
    while (i < testCases)
    {
        cin >> a[0];
        cin >> a[1];
        profilePic(length, a[0], a[1]);
        i++;
    }

    return 0;
}
