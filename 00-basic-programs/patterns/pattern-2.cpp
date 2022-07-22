#include<iostream>
using namespace std;

int main(){
    
    int x;
    cin >> x;
    
    int i = 1;
    while(i<=x){
        int j = 1;
        while(j<=x){
        cout << i;
        j++;
        }
        cout<<endl;
        i++;
    }
}
