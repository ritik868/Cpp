#include <iostream>
using namespace std;
int n;
int main() {
    cout<<"Enter an number:";
    cin>>n;
    int flag = 0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    if(flag==1){
    cout<<n<<" is not a prime number.";
    }
    else{
            cout<<n<<" is a prime number.";
    }
    
    
    return 0;
}