#include <iostream>

using namespace std;

int main()
{
    float floatVar;
    cin>>floatVar;

    int fl = *(int*) & floatVar;//assuming sizeof(int) = sizeof(float)

    int binaryData[sizeof(float) * 8];

    for(int i=0; i < sizeof(float) * 8; ++i)
        binaryData[i] = ( (1 << i) & fl) != 0 ? 1 : 0;


    for(auto u:binaryData) cout<< u<< " ";
    cout<<endl;
}
