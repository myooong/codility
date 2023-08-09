// O(N * log(N))
#include <unordered_map>

int solution(vector<int> &A) {
    
    unordered_map<int,int> idx_map;
    unordered_map<int,int> unique_number_map;
    

    int ans = -1;
    int idx = A.size();
    for(int i = 0; i < (int)A.size(); i++){
        unique_number_map[A[i]] = unique_number_map[A[i]] + 1;
        idx_map[A[i]] = i; 
    }

    for(auto it = unique_number_map.begin(); it != unique_number_map.end(); it++){
        if(it->second == 1){
            if(idx_map[it->first] < idx){
                idx = idx_map[it->first];
                ans = A[idx];
            }
                
        }
    }


    return ans;
}