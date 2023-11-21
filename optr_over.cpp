#include <iostream>
using namespace std;   
class abc{
    int a = 7;
      
      public:
    abc operator*(abc obj){
        abc temp;
        temp.a = a * obj.a;
        return temp; 
    }
    
    
     abc operator-(abc obj){
        abc temp;
        temp.a = a - obj.a;
        return temp; 
    }
    void show(){
        cout<<a<<endl;
    }
};

int main() {
abc x,y,z,w;
z = x*y;
w = x-y;
z.show();
w.show();

    return 0;
}
