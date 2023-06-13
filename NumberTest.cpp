#include <iostream>
using namespace std;


void numSumIndex(){
    int numArray[] = {1,2,3,5};
    int length = sizeof(numArray)/sizeof (int);
    int sum = 8;
    int tempSum = 0;
    for (int i=0; i< length; i++ ){
        for (int j=i+1; j < length; j++){
            for (int k=j+1; k<length; k++)
            {
                tempSum = numArray[i]+numArray[j]+numArray[k];
                if (sum==tempSum) {
                    cout << "\n The index : " << i << " , " << j << " , " << k;
                    break;
                }else continue;
            }
        }
    }
}
int main(){
    cout << "\n  ---- Number Test ----  \n";
    numSumIndex();
return 0;
}
