#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the number: ";
    int n;
    cin >> n;
    char cnt = 'A';
    for(int i=1;i<=n;i++){
        
        for(int j=1; j<=i;j++){
            cout << cnt << " ";
        }
        cnt++;
        cout << endl;
    }
    return 0;
} 
 