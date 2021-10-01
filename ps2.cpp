vector<Interval> Solution::insert(vector<Interval> &V, Interval i) {
    vector<Interval> ans;
    int n = V.size();
    int s = i.start,e = i.end;
    bool check = false;
    for(int i=0;i<n;i++){
        if(V[i].end < s)
            ans.push_back(V[i]);
        else if(V[i].start > e){
            if(!check)
                ans.push_back({s,e});
            ans.push_back(V[i]);
            check = true;
        }
        else{
            s = min(V[i].start,s);
            e = max(V[i].end,e);
        }
    }
    if(!check)
        ans.push_back({s,e});
    return ans;
}
