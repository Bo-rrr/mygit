#include <iostream>
using namespace std;

/**
 * 
 * @param number int整型 
 * @return int整型
 */
int jumpFloor(int number ) {
    // write code here
    int num[number+1],i;
    num[0]=1;
    num[1]=1;
    for(i=2;i<=number;i++){
        num[i] = num[i-1] + num[i-2];
    }
    return num[number];
}
