#include <iostream>

int main() {
    int ary[6] = {5,2,4,7,1,3};
    int key,i;
    for(int j = 1; j < 6; j++) {
        key = ary[j];
        i = j-1;
        while(i >= 0 && ary[i] > key) {
            ary[i+1] = ary[i];
            i = i - 1;
        }
        ary[i+1] = key;
    }
    for(int j = 0; j < 6; j++)
        std::cout << ary[j] ;
    return 0;
}