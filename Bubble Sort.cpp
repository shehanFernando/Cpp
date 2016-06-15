//bubble sort
//Shehan Fernando
#include <iostream>
using namespace std;

void swap(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}

void BubleSort(int a[], int i) {
    for (int j = 0; j < i; ++j) {


        for (int c = 0; c < i; c++) {
            if (a[c] > a[c + 1]) swap(a[c + 1], a[c]);
        }
    }
}

int main(){
    int x[8]={9,7,0,1,8,6,2,5};
    BubleSort(x, 8);

    for(int c=0; c < 8; c++){
        cout << x[c];

    }

    return 0;
}