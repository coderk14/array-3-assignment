#include <iostream>
using namespace std;

void swap(int &a,int &b) {
    int temp=a;
    a=b;
    b=temp;
}

int main () {
    int a[] ={0,6,0,7,6,0,9,1};
    int n=sizeof(a)/sizeof(int);

    int j=0;

    for(int i=0;i<n;i++) {
        if(a[i]!=0) {
            swap(a[i],a[j]);
            j++;
        }
    }
   

    for(int i=0;i<n;i++) {
        cout << a[i] << " ";
    }

}