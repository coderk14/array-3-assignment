#include<iostream>
#include<vector>

using namespace std;

int go(vector <int> & a,int val,int size) {
    int carry=0;

    for(int j=0;j<size;j++) {
        int prod=a[j]*val + carry;
        a[j]=prod % 10;
        carry=prod/10;

    }

    while(carry) {
        a[size]=carry%10;
        carry=carry/10;
        size++;
    }
    return size;
}

int main() {

   int n;
   cout << "enter the number" << endl;
   cin >> n;

   vector <int> a(5000,0);
   a[0]=1;

   int size=1;

   for(int i=2;i<=n;i++) {
    size=go(a,i,size);
   }

   for(int i=size-1;i>=0;i--) {
    cout << a[i];
   }

    return 0;
}