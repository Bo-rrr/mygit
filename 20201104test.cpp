#include <iostream>
using namespace std;

class Solution {
public:
	void replaceSpace(char *str,int length) {
        if(str == NULL ||length<=0) return;
        int nlen = 0;
        int numofblack = 0;
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i] == ' ')
                numofblack++;
            nlen++;
        }
        int newlen = nlen+numofblack*2;
        int oldindex = nlen;
        int newindex = newlen;
        while(oldindex>=0&&newindex>oldindex)
        {
            if(str[oldindex] == ' ')
            {
                str[newindex--] = '0';
                str[newindex--] = '2';
                str[newindex--] = '%';
            }
            else
            {
                str[newindex--] = str[oldindex];
            }
            oldindex--;
        }
	}
};
