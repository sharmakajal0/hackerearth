#include<iostream>

int main(){
    int a[6][6];
    int max = -63;
    int s;
    int top, mid, bottom;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            std::cin >> a[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            // s = (a[i][j] + a[i][j+1] + a[i][j+1] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2]);
            // std::cout << a[i][j] << " " << a[i][j+1] << " " << a[i][j+2] << std::endl;
            // std::cout << " " << a[i+1][j+1] << std::endl;
            // std::cout << a[i+2][j] << " " << a[i+2][j+1] << " " << a[i+2][j+2] << std::endl;
            
            top = a[i][j] + a[i][j+1] + a[i][j+2];
            mid = a[i+1][j+1];
            bottom = a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
            
            // std::cout << "top: " << top << std::endl;
            // std::cout << "mid: " << mid << std::endl;
            // std::cout << "bottom: " << bottom << std::endl;
            s = top + mid + bottom;
            if(s > max){
                max = s;
            }
            s = 0;
            // std::cout << "sum: " << s << std::endl;
            // std::cout << "max: " << max << std::endl;
        }
    }
    
    std::cout << max << "\n";

    return 0;
}