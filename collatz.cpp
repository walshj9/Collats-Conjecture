#include <iostream>
#include <chrono>

using namespace std;

int main(int argc, char *argv[]){
    unsigned int steps =0;
    unsigned long int num = stol((argv[1])), orig, highest = 0;
    orig = num; //limit = 2^32 = 18,446,744,073,709,551,615
    auto start = chrono::steady_clock::now();
    while(num != 1){
        if(num > highest){ highest = num;}
        if(num % 2 == 0){
            num /=2;
            steps += 1;
        }
        else{
            num = ((3*num)+1)/2;
            steps += 2;
        }

        
    }
    auto end = chrono::steady_clock::now();
    cout<<"Highest value: "<<highest<<endl;
    cout<<"No. of steps: " << steps<<endl;
    cout<<"Elapsed time: "<<chrono::duration_cast<chrono::microseconds>(end - start).count()<<" microseconds."<<endl;

    return 0;
}