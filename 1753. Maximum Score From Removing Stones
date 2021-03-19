class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        int ans=0;
        pq.push(a);pq.push(b);pq.push(c);
        
        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            a--;b--;
            if(a>0)pq.push(a);
            if(b>0)pq.push(b);
            ans+=1;
        }
        
        return ans;
    }
};
