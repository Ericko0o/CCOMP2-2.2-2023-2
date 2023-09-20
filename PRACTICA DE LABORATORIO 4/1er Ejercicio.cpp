#include<iostream>

using namespace std;
// Ej. si se inserta 10, los 
//números 10serán 3,5,6 y 9, y su suma será 23.
bool esMult(int num){
    if((num%3==0)||(num%5==0)){
        return true;
    }
    return false;
}

int main(){
    int n;
    int suma=0;
    cout<<"Número:";
    cin>>n;
    for (int i=1;i<n;i++){
        if (esMult(i)){
            cout<<i<<" ";
            suma+=i;
        }
    }
    cout<<"suma"<<suma;
    return 0;
}