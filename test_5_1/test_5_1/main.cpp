//
//  main.cpp
//  test_5_1
//
//  Created by hh on 2020/5/1.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <iostream>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}

using namespace std;

int main()
{
    int n,m,a,b,count=0;
    vector<int> nvec,mvec;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        nvec.push_back(a);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>b;
        mvec.push_back(b);
    }
    sort(nvec.begin(),nvec.end());
    sort(mvec.begin(),mvec.end());
    int na=0,nb=0;
    while(na<nvec.size()&&nb<mvec.size())
    {
        if(mvec[nb]>=nvec[na])
        {
            count=count+1;
            na++;
            nb++;
        }
        else
        {
            nb++;
        }
    }
    cout<<count<<endl;
    return 0;

}
————————————————
版权声明：本文为CSDN博主「Tom Hardy」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/qq_29462849/java/article/details/89382595
