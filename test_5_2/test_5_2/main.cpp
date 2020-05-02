//
//  main.cpp
//  test_5_2
//
//  Created by hh on 2020/5/2.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <iostream>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}

using namespace std;
typedef long long LL;
struct node {
    LL val;
    LL cnt;
};
int n; LL v;
LL w[35];
vector<node> f(int l, int r) {
    vector<node> ans;
    int len=r-l+1;
    int base=1<<len;
    map <LL, int> mapp;
    for (int i=0;i<base;i++) {
        LL tsum=0;
        for (int k=0;k<len;k++)
            if (i&(1<<k))
                tsum+=w[k+l];
        mapp[tsum]++;
    }
    for (auto it: mapp) {
        node tmp={it.first, it.second};
        ans.push_back(tmp);
    }
    return ans;
}
int main()
{
    scanf("%d %lld",&n,&v);
    for (int i=1;i<=n;i++)
        scanf("%lld",&w[i]);
    vector<node> a1=f(1, n/2);
    vector<node> a2=f(n/2+1, n);
    for (int i=1;i<a2.size();i++)
        a2[i].cnt+=a2[i-1].cnt;
    int l1=a1.size();
    int j=a2.size()-1;
    LL ans=0;
    for (int i=0;i<l1;i++) {
        while (j>=0&&a1[i].val+a2[j].val>v) j--;
        if (j<0) break;
        ans+=a1[i].cnt*a2[j].cnt;
    }
    printf("%lld\n",ans);
    return 0;
}
