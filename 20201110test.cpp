#incldue <iostream>
using namespace std;

/**
 * 
 * @param n int整型 
 * @return int整型
 */
int Fibonacci(int n ) {
    if(n==0) return 0;
    if(n==1) return 1;
    int first=1,second=0,current=0;
    for(int i=1;i<n;i++){
        current=first+second;
        second=first;
        first=current;
    }
    return current;
}
