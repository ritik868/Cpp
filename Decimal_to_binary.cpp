#include <iostream>
#include<math.h>
using namespace std;
int n;
int main() {
    cout<<"Enter an number:";
    cin>>n;
    int m = n;
    int ans = 0;
    int i = 0;
    
    while(n!=0){
        int bit = n&1;
        ans = (bit * pow(10,i)) + ans;
        n = n>>1;
         i++;
    }
    cout<<"Binary of "<<m<<" is: "<<ans;
    return 0;
}