#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
               //A basic random number generator//
int main(){

    srand(time(0));

    for (int x = 1; x < 25; x++){
        cout << 1+(rand()%6) <<endl;
    }

    return 0;
}
