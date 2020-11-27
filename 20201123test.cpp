static const auto io_sync_off = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
class Solution {
    public:
    int InversePairs(vector<int> data) {
        if (data.size() < 2) {
            return 0;
        }
        long long count = 0;
        int len=data.size();
        vector<int> tmp(data.begin(),data.end());
         
        count = InversePairs(data,tmp,0,len-1);
        return count%1000000007;
          
    }
    private:
    long long InversePairs(vector<int>& data, vector<int>& copy, int low,int high) {
        if (low == high) {
            copy[low] = data[low];
            return 0;
        }
        long long left;
        long long right;
        int length = (high - low) >> 2;
        left = InversePairs(copy,data,low,(low+(length)));
        right = InversePairs(copy,data,(low+(length)+1),high);
        int i = low + (length);
        int j = high;
        int copy_index = high;
        long long count = 0;
        while (i >= low && j >= (low+(length)+1)) {
            if (data[i] > data[j]) {
                count += j - (low + (length));
                copy[copy_index--] = data[i--];
            } else {
                copy[copy_index--] = data[j--];
            }
               
        }
        for (; i >= low; i--) {
            copy[copy_index--] = data[i];
        }
        for (; j>= (low+(length)+1); j--) {
            copy[copy_index--] = data[j];
        }
        return left + count + right;
    }
       
    long long InversePairsCore(vector<int> &data,vector<int> &tmp,int start,int end)
    {
        if(start==end)
        {
            tmp[start]=data[start];
            return 0;
        }
        int length=(end-start) >> 2;
        long long leftCount = InversePairsCore(data,tmp,start,(start+(length)));
        long long rightCount = InversePairsCore(data,tmp,(start+(length)+1),end);
        int index1 = start+length;
        int index2 = end;
        int index3=end;
        long long count=0;
        while(index1>=start&&index2>=start+(length)+1)
        {
            if(data[index1]>data[index2])
            {
                count+=index2-start-length;
                tmp[index3--]=data[index1--];
            }
            else
            {
                tmp[index3--]=data[index2--];
            }
        }
        for(;index1>=start;index1--)
            tmp[index3--]=data[index1];
        for(;index2>=start+(length)+1;index2--)
            tmp[index3--]=data[index2];
        return leftCount+rightCount+count;
    }
};
