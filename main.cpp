#include <iostream>
using namespace std;

int main()
{
    // TODO

    int value, maxVal;

    cin >> maxVal;
    for(int i = 0; i < 9; i++){
        cin >> value;
        if (value > maxVal){
            maxVal = value;
        }
    }
    cout << maxVal;
    
    return 0;
}
