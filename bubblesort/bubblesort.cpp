#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 3, 5, 2, 4, 0, 11, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    for(int val: arr){
        cout << val << endl;
    }
}