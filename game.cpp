#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int generator=0;
    int arr[4][4]={
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };
    srand(time(NULL)); //set random seed
    while(!generator){
        generator=rand() % (4-2+1) +2;
        if(generator==3)  generator += rand() % (2+1+1) -1;
        cout<<generator;
    }
    return 0;
}
