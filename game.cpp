#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool judge();
bool end();

int main(){
    int generator=0;
    int arr[4][4]={
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };
    int loc[2];
    srand(time(NULL)); //set random seed

    while(!end()){
        while(arr[loc[0]][loc[1]]!=0){
            loc[0]=rand()%4;
            loc[1]=rand()%4;
        }
        generator=rand() % (4-2+1) +2;
        if(generator==3) {
            generator +=1;
        }
        arr[loc[0]][loc[1]]=generator;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}

//know the location null or not
bool judge(){
    return true;
}

//know the game ends or not
bool end(){
    return false;
}