#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool judge();

int main(){
    int generator=0;
    int arr[4][4]={
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };
    srand(time(NULL)); //set random seed
    if(judge){
        generator=rand() % (4-2+1) +2;
        if(generator==3) {
            generator +=1;
        }
        cout<<generator;
    }
    return 0;
}

bool judge(){
    return true;
}