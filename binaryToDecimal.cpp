#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary[], int n)
{
    int decimal = 0;
    for(int i=0; i<n; i++){
        decimal += binary[i] * pow(2, n-i-1);
    }
    return decimal;
}

int main()
{
    int binary[] = {0,1,1,1,0,1,1,0};
    // let's find how many digit have in the array
    int n = sizeof(binary) / sizeof(binary[0]);

    int result = binaryToDecimal(binary, n);
    cout<<result<<endl;
}

