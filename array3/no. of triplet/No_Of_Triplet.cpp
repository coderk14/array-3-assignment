#include<iostream>
#include<vector>

using namespace std;

int main() {

    int n;
    cout << "enter number of which triplet to be found :" << endl;
    cin >> n;

    int arr[10] ={0,1,2,3,4,5,6,7,8,9};

    int count=0;

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            for(int k=j+1;k<n;k++) {
                if((arr[i]+arr[j]+arr[k])==n) {
                    count++;
                }
            }
        }
    }

    cout << "no. of triplets is " << count;


    return 0;
}