#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v1;

    v1.push_back(5);
    v1.push_back(10);
    v1.push_back(15);
    v1.push_back(20);
    v1.push_back(25);
    v1.push_back(30);
    v1.push_back(35);
    v1.push_back(40);
    v1.push_back(45);
    v1.push_back(50);

    for(int x:v1){
        cout<<x<<" ";
    }

    cout<<endl<<endl<<endl;
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 23};
    for(int i=0; i<primes.size(); i++){
        cout<<primes[i]<<" ";
    }

    return 0;
}
