#include <iostream>
#include <vector>

using namespace std;

int main(){
    /*int a = 0;
    int b = 0;
    cout << "Nombre d'année au service du Führer:" << endl;
    cin >> a;
    cout << "Nombre de fois que j'ai vu yann dans ma vie:" << endl;
    cin >> b;*/

    vector<int> integers {10, 28, 79, -138, 21};
    int result = 0;
    for(int i = 0; i< integers.size(); i++){
        if( i!= 0){
           if(integers[i] >= 0){
            cout << " + " << integers[i];
            }
            else{
                cout <<" - " << -integers[i];
            } 
        }
        else{
            cout << integers[i];
        }
        result += integers[i];
    }
    cout << " = " <<result << endl;
    return 0;
}