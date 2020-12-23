    #include<iostream>
    #include<algorithm>
    #include<vector>
    using namespace std;
    int main(){
        int n,m;
        cin >> n >> m;
        vector<int> v(m);
        for(int i =0 ;i<m;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int r = v[n-1]-v[0];
        int d;
        int j=n;
        while(j<m){
            d = v[j]-v[j-n+1];
            if (d < r){
                r = d;
            }
            j++;
        }
        cout << r;
    }
