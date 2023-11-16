#include <iostream>
#include <vector>

using namespace std;

void first (vector<int> &v,int n) {

bool flag=false;
    for(int i=0;i<n;i++) {
        int j;
        for(j=0;j<n;j++) {
            if(i!=j && v[i]==v[j]) {
                break;
            }
        }
        if(j==n) { 
           cout << v[i] << " is the first non repeating element";
           flag=true;
           break;
        }
        }
        if(flag== false) cout << "there is no non repeating element";
    }
   

int main() {
vector <int> v={2,3,4,5,5,4,1,2};
int n=v.size();

first (v,n);

    return 0;
}