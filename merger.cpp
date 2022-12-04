
#include <iostream>
using namespace std;
void printArr(int* a, int len)
{
    for(int i=0; i<len; i++){
        cout<<a[i];
    }
    cout<<endl;
    // cout<<"Hello";
}
int main() {
    // Write C++ code here
    int a[] = {2,4,5,6}, b[] = {1,2,3,8};
    int al = sizeof(a)/sizeof(int);
    int bl = sizeof(b)/sizeof(int);
    int* c = new int[al+bl];
    int i =0, j=0, k = 0;
    while(1){
        if(i<al and a[i] <= b[j]){
            c[k++] = a[i++];
        }
        else if(j<bl){
            c[k++] = b[j++];
        }
        else break;
    }
    printArr(c, al+bl);
    return 0;
}
