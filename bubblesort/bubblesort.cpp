#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        int control = 0;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                control = 1;
            }
        }
        if(control == 0){
            break;
        }
    }
    for(int val: arr){
        cout << val << endl;
    }
}