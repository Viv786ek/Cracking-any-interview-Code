vector<vector<int> > fourSum(vector<int> &num, int k) {
        // Your code goes here
        vector<vector<int>>res;
        if(num.empty())
            return res;
        int n=num.size();
        sort(num.begin(),num.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int target_2 = k-num[i]-num[j];
                int front=j+1;
                int back=n-1;
                while(front<back){
                    int two_sum=num[front]+num[back];
                    if(two_sum < target_2) front++;
                    else if(two_sum > target_2) back--;
                    else{
                        vector<int>temp(4,0);
                        temp[0]=num[i];
                        temp[1]=num[j];
                        temp[2]=num[front];
                        temp[3]=num[back];
                        res.push_back(temp);
                        
                        while(front<back && num[front] == temp[2]) ++front;
                        
                        while(front<back && num[back] == temp[3]) --back;
                        
                    }
                }
                while(j+1 < n && num[j+1]==num[j]) ++j;
            }
            while(i+1 < n && num[i+1] == num[i]) ++i;
        }
        return res;
    }
